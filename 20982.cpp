#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,cnt,a[10000];
int f(int x){
	int sum=0;
	while(x){sum+=x%10;x/=10;}
	return sum;
}
signed main(){
	freopen("formula.in","r",stdin);
	freopen("formula.out","w",stdout);
	cin>>n;
	for(int i=n;i>max(0ll,n-180);i--){
		if(i+f(i)==n){cnt++;a[cnt]=i;}
	}
	cout<<cnt<<endl;
	if(cnt)for(int i=1;i<=cnt;i++){cout<<a[i]<<endl;}
}
