#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,a[50005],sum;
signed main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){cin>>a[i];}
	sort(a+1,a+1+n);
	int rl,rr,cnt=0;
	for(int l1=1,r1=0;l1<=n;l1++){
		while(r1<n&&a[l1]+k>=a[r1+1]){r1++;cnt++;}
		for(int l2=n+1,r2=n;r2>0;r2--){
			while(l2>1&&a[r2]-k<=a[l2-1]){l2--;cnt++;}
			int m=0;
			cout<<l1<<' '<<r1<<" / "<<l2<<' '<<r2<<" : "<<cnt<<endl;
			if(r1>=l2&&l1<=r2){m=r1-l2;}
			else if(r1>=r2&&l1<=l2){m=l1-l2;}
			sum=max(sum,cnt-m);
			cnt--;
		}
		cnt--;
	}
	cout<<sum;
}
