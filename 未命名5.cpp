#include<bits/stdc++.h>
using namespace std;
int m,n;
int w[1005],v[1005];
int dp[20005];
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=0;j--){
			if(j>=w[i]){
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[m];
}
