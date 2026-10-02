#include<bits/stdc++.h>
using namespace std;
const int moe=10;
int a,b,c;
int main(){
	cin>>a>>b>>c;
	a%=moe,b%=4,c%=4;
	for(int i=1;i<c;i++){
		b=(b*b)%4;
	}
	for(int i=1;i<b;i++){
		a=(a*a)%moe;
	}
	cout<<a<<endl;
}
