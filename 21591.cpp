#include<bits/stdc++.h>
using namespace std;
int n,m,ma;
int dp[45];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i+j]++;
			ma=max(ma,dp[i+j]);
		}
	}
	for(int i=1;i<=m+n;i++){
		if(dp[i]==ma){
			cout<<i<<endl;
		}
	}
}
