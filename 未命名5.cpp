#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[400005];
int n,k;
void change(){
	ll m;
	m=a[n]/2;
	a[n]-=m;
	a[n+1]=m;
	n++;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(k--){
		sort(a+1,a+1+n);
		change();
	}
	sort(a+1,a+1+n);
	cout<<a[n];
}
