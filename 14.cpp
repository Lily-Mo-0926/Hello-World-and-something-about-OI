#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans,sa,sb,a,b;
signed main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		sa+=x,sb+=y;
		a+=x*x,b+=y*y;
	}
	ans=a*n-sa*sa+b*n-sb*sb;
	cout<<ans;
}
