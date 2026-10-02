#include<bits/stdc++.h>
using namespace std;
const int N=1501;
int n,m,k,h[N][N],f[N][N],st[N],t,g[N][N];
inline bool chk(int x){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			f[i][j]=h[i][j]>=x ?f[i-1][j]+1 :0;
		}
	}
	int mx=0;
	for(int i=1;i<=n;i++){
		t=0;
		for(int j=1;j<=m;j++){
			while(t&&f[i][st[t]]>=f[i][j]){t--;}
			g[i][j]=st[t],st[++t]=j;
		}
		t=0;
		for(int j=m;j;j--){
			while(t&&f[i][st[t]]>=f[i][j])--t;
			mx=max(mx,((t?st[t]:m+1)-g[i][j]-1)*f[i][j]),st[++t]=j;
		}
	}
	return mx>=k;
	
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>h[i][j];
		}
	}
	int l=0,r=1e9,mid,ans=-1;
	while(l<=r){
		mid=l+r>>1;
		if(chk(mid))ans=mid,l=mid+1;
		else r=mid-1;
	}
	cout<<ans;
}
