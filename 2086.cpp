#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,a;
bool cmp(int a,int b){
	return a>b;
}
int g1(int x){
	int cnt=0,a[16];
	while(x){
		a[cnt++]=x%10;
		x/=10;
	}
	sort(a,a+cnt,cmp);
	for(int i=0;i<cnt;i++){
		x=x*10+a[i];
	}
	//cerr<<x<<endl;
	return x;
}
int g2(int x){
	int cnt=0,a[16];
	while(x){
		a[cnt++]=x%10;
		x/=10;
	}
	sort(a,a+cnt);
	for(int i=0;i<cnt;i++){
		x=x*10+a[i];
	}
	return x;
}
int f(int x){
	return g1(x)-g2(x);
}
signed main(){
//	freopen("number.in","r",stdin);
//	freopen("number.out","w",stdout);
	cin>>n>>k;
	a=n;
	for(int i=1,b;i<=k;i++){
		b=f(a);
		if(a==b){
			break;
		}
		a=b;
	}
	cout<<a;
	return 0;
}
