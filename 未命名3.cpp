#include<bits/stdc++.h>
using namespace std;
int n,m,tx,ty;
char g[505][505],ctrl[]={'D','L','R','U'};
int vx[4]={1,0,0,-1},vy[4]={0,-1,1,0};
struct P{
	int x,y,d;
	string p;
};
queue<P> q;
void bfs(){
	while(!q.empty()){
		P t=q.front();
		q.pop();
		if(t.x==tx&&t.y==ty){
			cout<<t.d<<endl<<t.p;
			return;
		}
		for(int i=0;i<4;i++){
			int nx=t.x+vx[i],ny=t.y+vy[i];
			if(nx<=0||nx>n||ny<=0||ny>m||g[nx][ny]=='#'){
				continue;
			}
			g[nx][ny]='#';
			q.push({nx,ny,t.d+1,t.p+ctrl[i]});
		}
	}
	cout<<-1;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
			if(g[i][j]=='S'){
				q.push({i,j,0,""});
				
			}
			if(g[i][j]=='T'){
				tx=i;
				ty=j;
			}
		}
	}
	bfs();
	return 0; 
}
