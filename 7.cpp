#include<bits/stdc++.h>
using namespace std;
int a[100005],n;
string s;
int dp[100005][2],ans;
void init(){
	int len=s.length(),cnt=0;
	for(int i=0;i<=len;i++){
		if(!isdigit(s[i])){
			a[++n]=cnt;
			cnt=0;
		}
		else{
			cnt=10*cnt+(s[i]-'0');
		}
	}
}
int main(){
	getline(cin,s);
	init();
	for(int i=1;i<=n;i++){
		//cout<<a[i]<<' ';
		if(a[i]>a[i-1]){
			dp[i][1]=0;
		}
		else {
			dp[i][1]=max(dp[i-1][0]+1,dp[i-1][1]+1);
		}
		dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
	}
	//cout<<endl;
	cout<<max(dp[n][0],dp[n][1])<<'\n'<<ans;
}
