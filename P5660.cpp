#include<bits/stdc++.h>
using namespace std;
int ans,a;
int main(){
	cin>>a;
	while(a){
		ans+=a%10;
		a/=10;
	}
	cout<<ans;
}
