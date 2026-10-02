#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[40005],b[40005];
bool check(int u){
	int cnt=0;
	for(int i=1;i<=n;i++){
		cnt+=upper_bound(b+1,b+1+m,u-a[i])-b-1;
	}
	return cnt>=k;
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=m;i++){cin>>b[i];}
	int l=0,r=a[n]+b[m];
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid)){r=mid;}
		else{l=mid+1;}
	}
	cout<<l;
}
