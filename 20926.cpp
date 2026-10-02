#include<bits/stdc++.h>
using namespace std;
int n,t,m;
int g[20];
int grp[20],tot=0;
int ans=0;
void dfs(int x){
	if(tot>t){return;}
	if(x==n+1){ans+=(t==tot);return;}
	for(int i=1;i<=tot;i++){
		if(!(grp[i]&g[x])){
			grp[i]^=(1<<x);
			dfs(x+1);
			grp[i]^=(1<<x);
		}
	}
	++tot;
	grp[tot]^=(1<<x);
	dfs(x+1);
	grp[tot]^=(1<<x);
	--tot;
}
int main(){
	cin>>n>>t>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		g[u]|=(1<<v);
		g[v]|=(1<<u);
	}
	dfs(1);
	cout<<ans<<endl;
}
