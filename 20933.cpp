#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a,b;
int h[100005];
bool check(int m){
	int cnt=0;
	for(int i=1;i<=n;i++){
		int p=h[i]-b*m;
		if(p>0){cnt+=p/(a-b)+(p%(a-b)!=0);}
	}
	return cnt<=m;
}
main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	int l=0,r=1e14+5;
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid)){r=mid;}
		else{l=mid+1;}
	}
	cout<<l;
}
