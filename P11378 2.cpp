#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],sum[N],down[N];
vector<int>g[N];
void dfs_down(int x,int fa){
	down[x]=1;
	for(int i:g[x]){
		if(i!=fa){
			dfs_down(i,x);
			if(a[x]>a[i]){
				down[x]+=down[i];
			}
		}
	}
}
void dfs_sum(int x,int fa){
	if(a[x]>a[fa]){
		sum[x]+=sum[fa]+down[fa];
	}
	for(int i:g[x]){
		if(i!=fa){
			dfs_sum(i,x);
		}
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs_down(1,0);
	dfs_sum(1,0);
	int mx=0;
	for(int i=1;i<=n;i++){
		mx=max(mx,sum[i]+down[i]);
	}
	cout<<mx<<"\n";
	return 0;
} 
