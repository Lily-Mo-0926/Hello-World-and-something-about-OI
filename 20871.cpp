#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0,dis[8][2]={-1,-1, -1,0, -1,1, 0,-1, 0,1, 1,-1, 1,0, 1,1};
int a[201][201];//,vis[201][201];
queue<pair<int,int> >q;
void bfs(){
	int cnt=0;
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		a[x][y]=0;
		q.pop();
		cnt++;
		for(int i=0;i<8;i++){
			int dx=x+dis[i][0],dy=y+dis[i][1];
			if(dx>0&&dx<=n&&dy>0&&dy<=m&&a[dx][dy]){
				q.push({dx,dy});
			}
		}
	}
	ans=max(ans,cnt);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char x; cin>>x;
			a[i][j]=(x=='@');
			
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]){
				q.push({i,j});
				bfs();
			}
		}
	}
	cout<<ans;
}
