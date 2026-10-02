#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int n,k,a[10000005];
bool check(int u){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=u){cnt++;}
	}
	//cout<<cnt<<endl;
	return cnt>=k;
}
int main(){
	cin>>n>>a[1]>>k;
	for(int i=2;i<=n;i++){
		a[i]=(1ll*a[i-1]*a[i-1])%mod;
	}
	int l=1,r=mod;
	while(l<r){
		int mid=(l+r)>>1;
		//cout<<endl<<mid<<endl;
		if(check(mid)){
			l=mid+1;
		}
		else{
			r=mid;
		}
	}
	cout<<l-1<<endl;
}
