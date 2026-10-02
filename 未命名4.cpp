#include<bits/stdc++.h>
using namespace std;
int x[100005];
int n,q,m;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n);
	cin>>q;
	while(q--){
		cin>>m;
		cout<<upper_bound(x,x+n,m)-x<<endl;
	}
}
