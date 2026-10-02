#include<bits/stdc++.h>
using namespace std;
int l,r,c, sx,sy,sz, ex,ey,ez;
int vis[35][35][35];
char g[35][35][35];
int dx[6]={1,-1,0,0,0,0},dy[6]{0,0,1,-1,0,0},dz[6]{0,0,0,0,1,-1};
int bfs(int a,int b,int d){
	queue<int>q;vis[a][b][d]=0;
	q.push(a);q.push(b);q.push(d);
	while(!q.empty()){
		int hx,hy,hz;
		hx=q.front();q.pop();	hy=q.front();q.pop();	hz=q.front();q.pop();
		for(int i=0;i<6;i++){
			int x=hx-dx[i],y=hy-dy[i],z=hz-dz[i];
			if(x>0&&y>0&&z>0&&x<=l&&y<=r&&z<=c&&g[x][y][z]!='#'&&vis[x][y][z]==-1){
				vis[x][y][z]=vis[hx][hy][hz]+1;
				q.push(x);q.push(y);q.push(z);
			}
		}
	}
	return vis[ex][ey][ez];
}
int main(){
	memset(vis,-1,sizeof vis);
	cin>>l>>r>>c;
	for(int i=1;i<=l;i++)
		for(int j=1;j<=r;j++)
			for(int k=1;k<=c;k++){
				cin>>g[i][j][k];
				if(g[i][j][k]=='S'){sx=i;sy=j;sz=k;}
				if(g[i][j][k]=='E'){ex=i;ey=j;ez=k;}
			}
	int x=bfs(sx,sy,sz);
	if(x==-1){printf("Trapped!");}
	else printf("Escaped in %d minute(s).",x);
}
