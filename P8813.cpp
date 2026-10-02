#include<bits/stdc++.h>
using namespace std;
long long ans=1,a,b;
int main(){
	cin>>a>>b;
	while(b){
		ans*=a;
		b--;
		if(ans>1e9){
			cout<<-1;
			return 0;
		}
	}
	cout<<ans;
}
