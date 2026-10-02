#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int dx[]={0,0,-1,-1,-1,1,1,1},dy[]={-1,1,0,1,-1,0,1,-1};
char g[200][200];
queue<int>q;
int bfs(){
	int cnt=0;
	while(!q.empty()){
		int x,y;
		x=q.front(),q.pop();
		y=q.front(),q.pop();
		cnt++;
		for(int i=0,nx,ny;i<8;i++){
			nx=x+dx[i],ny=y+dy[i];
			if(nx>=0&&nx<n&&ny>=0&&ny<m&&g[nx][ny]=='@'){
				q.push(nx),q.push(ny);
				g[nx][ny]='#';
			}
		}
	}
	return cnt;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>g[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]=='@'){
				q.push(i),q.push(j);
				g[i][j]='#';
				ans=max(ans,bfs());
			}
		}
	}
	cout<<ans;
}
