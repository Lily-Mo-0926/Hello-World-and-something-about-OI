#include<bits/stdc++.h>
using namespace std;
const int P=1e9+7;
int n,a,b,c,f[200005];
int dfs(int x){
	if(x<=c){
		return 1;
	}
	if(f[x]){
		return f[x];
	}
	return f[x]=(dfs(x-b)%P+dfs(x-a)%P)%P;
}
int main(){
	cin>>n>>a>>b>>c;
	cout<<dfs(n);
}
