#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n,a[105],ans=0;
		cin>>n;
		for(int i=0;i<n;i++){cin>>a[i];}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				int x=a[i]+a[j];
				for(int k=j;k<n;k++){
					if(a[k]==x){
						//cout<<i<<' '<<j<<' '<<k<<endl;
						ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
