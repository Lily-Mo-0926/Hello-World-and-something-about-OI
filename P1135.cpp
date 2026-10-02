#include<bits/stdc++.h>
using namespace std;
int n,a,b,f[205];
int vis[205];
queue<int>q;
void bfs(int u){
	q.push(u);
	while(!q.empty()){
		int j=q.front();
		q.pop();
		if(j+f[j]<=n&&vis[j+f[j]]==-1){
			vis[j+f[j]]=vis[j]+1;
			q.push(j+f[j]);
		}
		if(j-f[j]>0&&vis[j-f[j]]==-1){
			vis[j-f[j]]=vis[j]+1;
			q.push(j-f[j]);
		}
	}
}
int main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>f[i];
		vis[i]=-1;
	}
	vis[a]=0;
	bfs(a);
	cout<<vis[b];
}
