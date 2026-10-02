#include<bits/stdc++.h>
using namespace std;
int n,ans;
int main(){
	cin>>n;
	for(int i=1,x;i<n;i++){
		cin>>x;
		ans+=x;
	}
	ans*=8;
	cin>>n;
	ans+=n*2;
	cout<<ans<<"000";
}
