#include<bits/stdc++.h>
using namespace std;
int n,m,maxn;
int a[105],b[10005],f[10005];
const int in=-2e9;
int main(){
	int ans=-2e9;
	memset(f,-0x7f,sizeof f);
	cin>>n>>m;
	for(int i=1;i<=m;i++){cin>>a[i];maxn=max(maxn,a[i]);}
	for(int i=1;i<=n;i++){cin>>b[i];}
	f[1]=b[1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(i-a[j]>0)f[i]=max(f[i],f[i-a[j]]+b[i]); 
		}
	for(int i=n-maxn+1;i<=n;i++)ans=max(f[i],ans);
	cout<<ans;
} 
