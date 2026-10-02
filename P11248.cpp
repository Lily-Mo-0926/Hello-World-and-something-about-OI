#include<bits/stdc++.h>
using namespace std;
int T,n,m,x,dp[500][500][300];
char g[500][500];
int main(){
	cin>>T;
	while(T--){
		memset(dp,0,sizeof dp);
		cin>>n>>m>>x;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>g[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				for(int k=0;k<=x;k++){
					dp[i][j][k]=(g[i][j]=='1')+max(dp[i-1][j][k],dp[i][j-1][k]); 
					if(k>0&&g[i][j]=='?'){
						dp[i][j][k]=max(dp[i-1][j][k-1],dp[i][j-1][k-1])+1; 
					}
				}
			}
		}
		cout<<dp[n][m][x]<<endl;
	}
}
