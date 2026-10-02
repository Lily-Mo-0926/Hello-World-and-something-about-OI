#include<bits/stdc++.h>
using namespace std;
int n,Q;
int a[100005],b[100005],mb;
int main(){
	cin>>n>>Q;
	memset(b,-1,sizeof(b));
	b[0]=1e9;
	for(int i=1,x;i<=n;i++){
		cin>>a[i]>>x;
		b[x]=max(b[x],a[i]);
		mb=max(mb,x);
	}
	for(int i=1;i<=mb;i++){
		b[0]=min()
	}
	while(q--){
		int c,d;
		cin>>c>>d;
		b[d]=
	}
}
