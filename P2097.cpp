#include<bits/stdc++.h>
using namespace std;
int m,n,cnt;
vector<int> g[100001];
bool vis[100001];
queue<int>q;
void bfs(int x){
	q.push(x);
	vis[x]=1;
	while(!q.empty()){
		int h=q.front();q.pop();
		for(auto v: g[h]){
			if(!vis[v]){
				vis[v]=1;
				q.push(v);
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			bfs(i);
			cnt++;
		}
	}
	cout<<cnt;
}
