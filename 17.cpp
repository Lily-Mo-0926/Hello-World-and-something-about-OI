#include<bits/stdc++.h>
using namespace std;
int T,n,a,b,ans;
int g[1001][1001];//,g1[1001][1001],g2[1001][1001];
void dfs(int x,int y,int sum){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			
		}
	}
	if(x==n&&y==n){ans=min(sum,ans);return;}
	//else if(g1[x][y]<0){return;}
	
}
int main(){
	cin>>T;
	while(T--){
		ans=1000005;
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				char c;
				cin>>c;
				g[i][j]=(c=='W'?0:(c=='G'?1:2));
				//if(i<=1+a&&j<=1+b)g1[i][j]=(g[i][j]!=0);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				
			}
		}
	}
}
