#include<bits/stdc++.h>
using namespace std;
int n,a[11];
int main(){
	for(int i=1;i<11;i++)cin>>a[i];
	cin>>n;
	for(int i=1;i<11;i++)a[0]+=a[i]<=n+30?1:0;
	cout<<a[0];
} 
