#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main(){
	cin>>a>>b>>c;
	a=a*a,b*=c;
	if(a>b){
		cout<<"Alice";
	}
	else cout<<"Bob";
}
