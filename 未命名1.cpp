#include<bits/stdc++.h>
using namespace std;
int n,m,tx,ty;
char g[505][505];
int vis[505][505];
queue<int> que;
int v[4]={1,0,-1,0};
void bfs(){
	while(!que.empty()){
		int x=que.front();
		que.pop();
		int y=que.front();
		que.pop();
		for(int i=0;i<4;i++){
			int nx=x+v[i];
			int ny=y+v[3-i];
			if(nx<=0||nx>n||ny<=0||ny>m)continue;
			if(vis[nx][ny]||g[nx][ny]=='#')continue;
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
	return 0; 
}
