#include<bits/stdc++.h>
using namespace std;
vector<int>a[25];
int n;
long long x;
int ans;
void dfs(int dep,long long mul){
	if(dep>n){
		if(mul==x)ans++;
		return;
	}
	for(auto v : a[dep]){
		if(mul>1.0*x/v)continue;
		dfs(dep+1,mul*v);
	}
	
}
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int m,k;cin>>m;
		for(int j=0;j<m;j++){
			cin>>k;
			a[i].push_back(k);
		}
	}
	dfs(1,1);
	cout<<ans;
}
