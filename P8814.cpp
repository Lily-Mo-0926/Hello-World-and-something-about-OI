#include<bits/stdc++.h>
#define int long long
using namespace std;
int k;
signed main(){
	cin>>k;
	while(k--){
		int n,e,d,p,q;
		cin>>n>>e>>d;
		e=n-e*d+2;//e=p+q,n=pq
		d=e*e-4*n;//d=(p-q)^2
		n=sqrt(d);//n=p-q
		p=(e+n)/2;
		q=e-p;
		if(n*n==d){
			if(p>q)swap(p,q);
			cout<<p<<' '<<q<<endl;
		}
		else{cout<<"NO"<<endl;}
	}
}
