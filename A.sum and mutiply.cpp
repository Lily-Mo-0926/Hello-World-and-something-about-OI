#include<bits/stdc++.h>
using namespace std;
#define int long long
int s,p;
signed main(){
	cin>>s>>p;
	for(int i=1;i*i<=p;i++){
		if(p%i==0){
			int n=p/i;
			if(n+i==s){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"No"<<endl;
	return 0;
}
