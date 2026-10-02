#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	cin>>a>>b>>c;
	cout<<min(a+a+b+b,min(a+c+b,min(b+c+c+b,a+c+c+a)));
}
