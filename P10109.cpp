#include<bits/stdc++.h>
using namespace std;
int n,fa[305],Q;
int m,c[305],ans;
void dfs(int u){
	c[u]++;
	if(c[u]>=m){ans=max(ans,u);}
	if(fa[u]==u){return;}
	dfs(fa[u]);
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>fa[i];
	}
	cin>>Q;
	while(Q--){
		ans=-1;
		memset(c,0,sizeof c);
		cin>>m;
		for(int i=0,x;i<m;i++){
			//cin>>c[i];
			cin>>x;
			dfs(x);
		}
//		for(int i=0;i<n;i++){
//			cout<<c[i]<<' ';
//		}
//		cout<<endl;
		cout<<ans<<endl;
	}
} 
