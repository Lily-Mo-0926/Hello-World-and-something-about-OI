#include<bits/stdc++.h>
using namespace std;
int s,d,t,v1,v2;
int main(){
	cin>>d>>t>>v1>>v2;
	for(int i=1;;i++){
		if(i<=t)s-=v2;
		s+=v1;
		if(s>=d){
			cout<<i;
			return 0;
		}
	}
}
