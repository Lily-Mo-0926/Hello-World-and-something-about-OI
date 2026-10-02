#include<bits/stdc++.h>
using namespace std;
int n,m,t,ans;
bool vis[9];
vector<int>g[9];
void dfs(int step,int u){
	vis[u]=1;
	if(step==n){ans++;return;}
	for(auto v:g[u]){
		if(!vis[v]){
			dfs(step+1,v);
			vis[v]=0;
		}
	}
}
int main(){
	cin>>n>>t>>m;
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,1);
	cout<<ans;
}
