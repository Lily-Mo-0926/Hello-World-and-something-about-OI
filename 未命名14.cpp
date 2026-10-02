#include<bits/stdc++.h>
using namespace std;
#define int long long
map<int,int>f;
int n;
int dfs(int u){
	if(/*u==0||*/f[u]){
		return f[u];
	}
	return f[u]=dfs(u/2)+dfs(u/3);
}
signed main(){
	cin>>n;
	f[0]=1;
	dfs(n);
	cout<<f[n];
}
