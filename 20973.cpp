#include<bits/stdc++.h>
using namespace std;
#define int long long
int l,r,N;
void check(int u){
	for(int i=1;u*i<=r;i*=10){
		int lu=u*i,ru=u*i+i-1;
		if(lu>r||ru<l){continue;}
		else{cout<<"VALID"<<endl;return;}
	}
	cout<<"INVALID"<<endl;
}
main(){
	freopen("check.in","r",stdin);
	freopen("check.out","w",stdout);
	cin>>l>>r>>N;
	while(N--){
		int x;cin>>x;
		check(x);
	}
}
