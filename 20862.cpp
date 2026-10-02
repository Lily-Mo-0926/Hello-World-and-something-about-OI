#include<bits/stdc++.h>
using namespace std;
int n,a[200005],b[200005];
int main(){
	freopen("del.in","r",stdin);
	freopen("del.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	int maxi=0,maxn=0;//number i, n times
	for(int i=1;i<=n;i++){
		if(b[i]>=maxn){
			maxn=b[i];
			maxi=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=maxi){
			cout<<a[i]<<' ';
		}
	}
}
