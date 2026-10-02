#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,ans;
signed main(){
	freopen("magic.in","r",stdin);
	freopen("magic.out","w",stdout);
	cin>>a>>b;
	for(int i=10;i<=10*b;i*=10){
		for(int j=2;j<=10;j++){
			if(i%j==0&&i/j>=a&&i/j<=b){
				ans++;
			}
		}
	}
	cout<<ans;
}
