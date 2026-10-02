#include<bits/stdc++.h>
using namespace std;
int w,h,a,b,ans;
int dx[4]={1,2,1,2},dy[4]={2,1,-2,-1};
int vis[20][20];
void dfs(int x,int y){
	if(x==b&&y==a){
		ans++;
		return;
		printf("1\n");
	}
	for(int i=0;i<4;i++){
		if(x+dx[i]>=0&&x+dx[i]<=b&&y+dy[i]<=a&&y+dy[i]>=0){
			//vis[x+dx[i]][y+dy[i]]=1;
			printf("%d %d\n",x+dx[i],y+dy[i]);
			dfs(x+dx[i],y+dy[i]);
			//vis[x+dx[i]][y+dy[i]]=0;
		}
		
	} 
}
int main(){
	w=h=18;
	cin>>a>>b;
	dfs(0,0);
	cout<<ans<<endl; 
} 
