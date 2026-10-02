#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int f[501][21];
vector<int>g[501];
void add(int u,int v){
	g[u].push_back(v);
}
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		add(u,v);
		add(v,u);
	}
	for(int i=1;i<=n;i++){
		bool vis[501];
		memset(vis,0,sizeof vis);
		vis[i]=1;
		for(int j=1;j<=k;j++){
			bool c[510];
			memset(c,0,sizeof c);
			for(int u=1;u<=n;u++){
				if(!vis[u])continue;
				for(int l=0;l<g[u].size();l++){
					c[g[u][l]]=1;
				}
			}
			int cc=0;
			for(int v=1;v<=n;v++){
				cc+=c[v],vis[v]=c[v];
			}
			f[i][j]=cc;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			cout<<f[i][j]<<' ';
		}
		cout<<"\n";
	}
}
