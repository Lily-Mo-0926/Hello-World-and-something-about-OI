#include<bits/stdc++.h>
using namespace std;
int n,m,sum,maxn;
int a[100005];
bool check(int x){
	int tot=0,k=0;
	for(int i=1;i<=n;i++){
		tot+=a[i];
		if(tot>x){
			i--;
			tot=0;
			k++;
		}
	}
	return k>=m;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		maxn=max(maxn,a[i]);
	}
	int l=maxn,r=sum;
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid)){
			l=mid+1;
		}
		else{
			r=mid;
		}
	}
	cout<<l<<endl;
}
