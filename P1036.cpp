#include<bits/stdc++.h>
using namespace std;
int n,k,ans;
int x[25];
bool check(int m){
	if(m<2)return 0;
	for(int i=2;i*i<=m;i++){
		if(m%i==0){return 0;}
	}
	return 1;
}
void dfs(int f,int u,int cnt){
	cout<<f<<' '<<u<<' '<<cnt<<endl;
	if(u==k){
		ans+=check(cnt);
		//cout<<cnt<<' '<<check(cnt)<<endl;
		return;
	}
	for(int i=f+1;i<=n;i++){
		dfs(i,u+1,cnt+x[i]);
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	dfs(0,0,0);
	cout<<ans;
}
