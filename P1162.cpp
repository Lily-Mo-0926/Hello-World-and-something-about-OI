#include<bits/stdc++.h>
using namespace std;
int g[31][31];
int n;
queue<int>q;
int dx[]={-1,1,0,0},
	dy[]={0,0,-1,1};
void bfs(int a,int b){
	q.push(a);q.push(b);
	g[a][b]=-1;
	while(!q.empty()){
		int x=q.front();q.pop();
		int y=q.front();q.pop();
		for(int i=0;i<4;i++){
			int u=x+dx[i],v=y+dy[i];
			if(!g[u][v]&&u>0&&u<=n&&v>0&&v<=n){
				g[u][v]=-1;
				q.push(u);q.push(v);
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cin>>g[i][j];}}
	for(int i=1;i<=n;i++){
		if(!g[i][1]){bfs(i,1);}
		if(!g[i][n]){bfs(i,n);}
		if(!g[1][i]){bfs(1,i);}
		if(!g[n][i]){bfs(n,i);}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<(g[i][j]?(g[i][j]+1?1:0):2)<<' ';
		}
		cout<<endl;
	}
}
