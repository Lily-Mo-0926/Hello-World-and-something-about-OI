#include<bits/stdc++.h>
using namespace std;
int n,vis[100005],b[100005],ans;
struct node{
	int id,num;
}a[100005];
bool cmp(node a,node b){
	return a.num>b.num;
}
vector<int>g[100002];
void add(int x,int y){
	g[x].push_back(y);
	return;
}
void bfs(int u){
	memset(vis, 0, sizeof vis);
	queue<int>q;
	int cnt=1;
	vis[u]=1;
	q.push(u);
	while(!q.empty()){
		int h=q.front();
		q.pop();
		for(auto i:g[h]){
			if(!vis[i]&&b[i]<b[h]){
				vis[i]=1;
				q.push(i);
				cnt++;
			}
		}
	}
	ans=max(ans,cnt);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i];
		a[i].num=b[i];
		a[i].id=i;
	}
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		add(u,v);
		add(v,u);
	}
	sort(a+1,a+1+n,cmp);
	int mx=a[1].num;
	for(int i=1;a[i].num==mx;i++){
		bfs(a[i].id);
	}
	cout<<ans<<endl;
}
 
