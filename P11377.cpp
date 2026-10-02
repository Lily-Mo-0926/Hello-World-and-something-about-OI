#include<bits/stdc++.h>
using namespace std;
int T,n,p,q;
int w[505],v[105],f[105][50005];
int main(){
	cin>>T;
	while(T--){
		cin>>n>>p>>q;
		memset(f,0,sizeof f);
		for(int i=1;i<=n;i++){
			cin>>w[i]>>v[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=q;j++){
				f[i][j]=f[i-1][j];
				if(v[i]<=j){
					f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
				}
			}
		}
		bool fl=1;
		for(int i=1;i<=q;i++){
			if(f[n][i]>=p){
				cout<<i<<endl;
				fl=0;
				break;
			}
		}
		if(fl){
			cout<<-1<<endl;
		}
	}
} 
