#include<bits/stdc++.h>
using namespace std;
int w,h,a,b;
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
char c[20][20];
bool vis[20][20];
void bfs(int x,int y){
	int ans=0;
	queue<int>q;
	q.push(x);
	q.push(y);
	vis[x][y]=1;
	while(!q.empty()){
		ans++;
		int hx=q.front();q.pop();
		int hy=q.front();q.pop();
		for(int i=0;i<4;i++){
			int u=hx+dx[i],v=hy+dy[i];
			if(u>=0&&v>=0&&u<h&&v<w&&c[u][v]=='.'&&!vis[u][v]){
				q.push(u);q.push(v);
				vis[u][v]=1;
			}
		}
	}
	printf("%d",ans);
}
int main(){
	cin>>w>>h;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>c[i][j];
			if(c[i][j]=='@'){
				a=i,b=j;
			}
		}
	}
	bfs(a,b);
} 
