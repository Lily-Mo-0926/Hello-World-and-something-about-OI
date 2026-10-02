#include<bits/stdc++.h>
using namespace std;
#define int long long
const int moss=1e9+7;
int n,a[200005],sum[200005],ans;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=(sum[i-1]+a[i])%moss;
	}
	for(int i=1;i<=n;i++){
		ans=(ans+a[i]*(sum[n]-sum[i]))%moss;
	}
	cout<<ans;
}
