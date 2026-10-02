#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[14];
int dfs(int x,int s,int j,int f){
	if(x>n){
		return (s+j==24)+(s-j==24);
	}
	return dfs(x+1,s+j,a[x],1)+dfs(x+1,s,a[x]*j,f)+f*dfs(x+1,s-j,a[x],1);
}//x:当前扫描序号  s:当前和  j:当前暂存  f:防止首数为负 
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<dfs(2,0,a[1],0);
}
