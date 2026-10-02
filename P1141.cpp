#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001],f[1001][1001];
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
queue<int>q,q2;
void bfs(int x,int y){
	//cout<<x<<":"<<y<<endl;
	if(f[x][y])return;
	f[x][y]++;
	q.push(x);
	q.push(y);
	while(!q.empty()){
		int hx,hy;
		hx=q.front(); q.pop();	q2.push(hx);
		hy=q.front(); q.pop();	q2.push(hy);
		//cout<<hx<<" "<<hy<<endl;
		for(int i=0;i<4;i++){
			int u=hx+dx[i],v=hy+dy[i];
			if(0<u&&u<=n&&0<v&&v<=n&&a[u][v]!=a[hx][hy]&&f[u][v]==0){
				f[x][y]++;
				f[u][v]=1;
				q.push(u);
				q.push(v);
			}
		}
	}
	while(!q2.empty()){
		int u,v;
		u=q2.front(); q2.pop();
		v=q2.front(); q2.pop();
		f[u][v]=f[x][y];
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			char c; cin>>c;
			a[i][j]=c-'0';
		}
	}
	while(m--){
		int x,y;
		cin>>x>>y;
		bfs(x,y);
		cout<<f[x][y]<<endl;
	}
}
