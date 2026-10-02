#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int dx[]={ 2, 2, 1, 1,-1,-1,-2,-2},
	dy[]={ 1,-1, 2,-2, 2,-2, 1,-1},vis[401][401];
queue<int>q;
int main(){
	cin>>n>>m>>a>>b;
	q.push(a);
	q.push(b);
	vis[a][b]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		int y=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int u=x+dx[i],v=y+dy[i];
			if(u>0&&v>0&&u<=n&&v<=m&&!vis[u][v]){
				vis[u][v]=vis[x][y]+1;
				q.push(u);
				q.push(v);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<vis[i][j]-1<<' ';
		}
		cout<<endl;
	}
}
