#include<bits/stdc++.h>
using namespace std;
int s,a[1001];
int dp[1001];
void pr(){
	for(int i=1;i<=1000;i++){
		for(int j=i*2;j<=1000;j+=i){
			a[j]+=i;
		}
	}
	return;
}
int main(){
	cin>>s;//dp[i]=max(dp[i-j+a[j,dp[i)
	pr();
	for(int i=2;i<=s;i++){
		dp[i]=a[i];
		for(int j=2;j<=s;j++){
			if(i-j>0){
				dp[i]=max(dp[i-j]+a[j],dp[i]);
			}else{break;}
		}
	}
	cout<<dp[s];
	return 0;
} 
