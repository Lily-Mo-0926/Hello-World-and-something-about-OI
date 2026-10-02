#include<bits/stdc++.h>
using namespace std;
int n,tot=1,ans=1;
vector<int>g[400005];
map<int,int>flor2id;
int flor[400005];
bool vis[400005];
void dfs(int u){
	ans=max(ans,flor[u]);
	vis[u]=1;
	for(auto v:g[u]){
		if(!vis[v])dfs(v);
	}
}
int main(){
	freopen("higher.in","r",stdin);
	freopen("higher.out","w",stdout);
	cin>>n;
	flor2id[1]=1;
    flor[1]=1;
	for(int i=1;i<=n;i++){
		int A,B,u,v;
		cin>>A>>B;
		if(flor2id.find(A)==flor2id.end()){
			flor2id[A]=++tot;
			flor[tot]=A;
		}
		if(flor2id.find(B)==flor2id.end()){
			flor2id[B]=++tot;
			flor[tot]=B;
		}
		u=flor2id[A],v=flor2id[B];
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1);
	cout<<ans<<endl;
}
