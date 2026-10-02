#include<bits/stdc++.h>
using namespace std;
int t,m,ans;
int w[101],v[101];
int a[101][1001];//a[ti][obj]
int main(){
	cin>>t>>m;
	for(int i=1;i<=m;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=t;j>=0;j--){
			a[i][j]=a[i-1][j];
			if(j>=w[i])
				a[i][j]=max(a[i-1][j-w[i]]+v[i],a[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		ans=max(ans,a[i][t]);
/*		for(int j=0;j<=t;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;cout<<a[m][t];
*/	}
	cout<<ans;
}
