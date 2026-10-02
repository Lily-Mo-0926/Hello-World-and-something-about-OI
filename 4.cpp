#include<bits/stdc++.h>
using namespace std;
int n,ma,mb,a,b,c,dp[405][405],s=1e9,k=1;
int main(){
	cin>>n>>ma>>mb;
	memset(dp,0x3f,sizeof(dp));
	dp[0][0]=0;
	while(n--){
		cin>>a>>b>>c;
		for(int i=400;i>=a;i--){
			for(int j=400;j>=b;j--){
				dp[i][j]=min(dp[i][j],dp[i-a][j-b]+c);
			}
		}
	}
	while(max(ma,mb)*k<=400){
		s=min(s,dp[ma*k][mb*k]);
		k++;
	}
	cout<<(s==1e9?-1:s);
}
