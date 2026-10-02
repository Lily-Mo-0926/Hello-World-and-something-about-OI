#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[100005],mid,l,r,ans;
int main(){
	cin>>n>>t;
	l=r=mid=n/2;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<mid;i++){
		if(a[i]>t&&l==mid){
			l=i;
		}
		if(a[n-i-1]<t&&r==mid){
			r=n-i-1;
		}
	}
	ans+=abs(a[mid]-t);
	for(int i=l;i<mid;i++){
		ans+=t-a[i];
	}
	for(int i=r;i>mid;i--){
		ans+=a[i]-t;
	}
	cout<<ans;
}
