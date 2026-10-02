#include<bits/stdc++.h>
using namespace std;
int n,m,tx,ty;
char g[505][505],ctrl[4]={'D','L','R','U'};
char ans[120005],cnt=0;
int vis[505][505];
queue<int> que;
int vx[4]={-1,0,0,1},vy[4]={0,-1,1,0};
void bfs(){
	while(!que.empty()){
		int x=que.front();
		que.pop();
		int y=que.front();
		que.pop();
		for(int i=0;i<4;i++){
			int nx=x+vx[i];
			int ny=y+vy[i];
			ans[cnt++]=ctrl[i];
			if(nx<=0||nx>n||ny<=0||ny>m){
				cnt--;
				continue;
			}
			if(vis[nx][ny]||g[nx][ny]=='#'){
				cnt--;
				continue;
			}
			vis[nx][ny]=vis[x][y]+1;
			que.push(nx);
			que.push(ny);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
			if(g[i][j]=='S'){
				que.push(i);
				que.push(j);
				vis[i][j]=1;
			}
			if(g[i][j]=='T'){
				tx=i;
				ty=j;
			}
		}
	}
	bfs();
	cout<<vis[tx][ty]-1<<endl;
	if(vis[tx][ty]){
		for(int i=0;i<cnt;i++)cout<<ans[i];
	}
	return 0; 
}
