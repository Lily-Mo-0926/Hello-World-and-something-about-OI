#include<bits/stdc++.h>
using namespace std;
int k,n;
double data[60],res,mx,mn=1e9;
int main(){
	cin>>k>>n;
	for(int i=1;i<=n;i++){
		cin>>data[i];
		if(i<k)res+=data[i];
	}
	for(int i=k;i<=n;i++){
		res+=data[i]-data[i-k];
		mx=max(mx,res);
		mn=min(mn,res);
	}
	printf("%.9lf",(mx/k-mn/k));
}
