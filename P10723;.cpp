#include<bits/stdc++.h>
using namespace std;
int n,a[100005],mark,ans=0;
bool vis[100005];
vector<int>g[100005];
void add(int u,int v){
	g[u].push_back(v);
}
void dfs(int u,int cnt){
	if(a[u]&&!vis[u]){
		//cout<<u<<": +"<<cnt<<endl;
		ans+=cnt;
		return;
	}
	vis[u]=1;
	for(auto i : g[u]){
		if(!vis[i]){
			//cout<<i<<endl;
			dfs(i,cnt+(!a[i]));
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//if(a[i]&&!mark)mark=i;
	}
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		add(u,v);
		add(v,u);
	}for(int i=1;i<=n;i++){
		if(a[i]){
			vis[i]=1; 
			dfs(i,0);
		}
	}
	cout<<ans;
}
