#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		int l,r,n1=0,n2=0,n3=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(a[i]==1)n1++;
			else if(a[i]==2)n2++;
			else n3++;
		}
		cout<<n1<<' '<<n2<<' '<<n3<<endl;
	}
}
