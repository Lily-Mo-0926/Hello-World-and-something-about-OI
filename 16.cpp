#include<bits/stdc++.h>
using namespace std;
int T,n,a,b,ans;
int g[1001][1001];
void dfs(int x,int y,int sum,int f){
	if(x==n&&y==n){ans=min(sum,ans);return;}
	while(f==0){
		if(x<n)x++;
		else x=1,y++;
		f=g[x][y];
	}
	if(g[x+a][y+b]){
		dfs(x)
	}
	if(g[x][y]==1)dfs(x,y,sum+1,0);
}
int main(){
	cin>>T;
	while(T--){
		ans=1000005;
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				char c;
				cin>>c;
				g[i][j]=(c=='W'?0:(c=='G'?1:2));
			}
		}
		dfs(1,1,0,g[1][1])
	}
}
