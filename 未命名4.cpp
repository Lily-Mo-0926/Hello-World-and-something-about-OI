#include<bits/stdc++.h>
using namespace std;
int n;
int a[5001],dp[5001];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j])dp[i]=max(dp[i],dp[j]+1);
		}
	}
	for(int i=1;i<=n;i++){
		dp[0]=max(dp[0],dp[i]);
	}
	cout<<dp[0];
}
