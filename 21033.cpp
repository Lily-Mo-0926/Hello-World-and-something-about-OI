#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,a[50005],b[50005],sum1,sum2;
signed main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){cin>>a[i];}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){b[i]=a[i];}
	int rl,rr,cnt=0;
	for(int l=1,r=0;l<=n;l++){
		while(r<n&&a[l]+k>=a[r+1]){r++;cnt++;}
		//if(???)
		if(cnt>sum1){
			sum1=cnt;
			rl=l;
			rr=r;
		}
		cnt--;
	}
	for(int i=rl;i<=rr;i++){a[i]=0;}
	sort(a+1,a+1+n);cnt=0;
	for(int l=1,r;l<=n;l++){
		while(a[l]==0){l++;}
		r=l-1;
		while(r<n&&a[l]+k>=a[r+1]){r++;cnt++;}
		//if(???)
		if(cnt>sum2){
			sum2=cnt;
		}
		cnt--;
	}
	cout<<sum1+sum2;
}
