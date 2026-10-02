#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],m,cnt;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){cin>>a[i];a[i]-=1;}
	m=n/k;
	for(int i=1;i<=k;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum+=a[i+j*k];
		}
		cnt+=min(sum,m-sum);
	}
	cout<<cnt;
}
