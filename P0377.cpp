#include<bits/stdc++.h>
using namespace std;
struct cow{
	int a,b;
}c[10];
int n,ans=0x3f3f3f;
bool vis[11];
void dfs(int step,int las,int cnt){
	if(step>=n){
		//cout<<cnt<<endl;
		ans=min(ans,cnt);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(step+1,i,cnt+(las==0?0:max(c[las].b,c[i].a)));
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>c[i].a;
	for(int i=1;i<=n;i++)cin>>c[i].b;
	c[0].a=c[0].b=0;
	dfs(0,0,0);
	cout<<ans+n; 
}
