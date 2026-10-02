#include<bits/stdc++.h>
using namespace std;
int n,m,k=0,a[100005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){a[i]=i-1;}
	for(int x,y,i=1;i<=m;i++){
		cin>>x>>y;
		k+=x>y?-1:1;
	}
	if(k<0){
		for(int i=1;i<n;i++){a[i]=i+1;}
		a[n]=0;
	}
	for(int i=1;i<=n;i++){cout<<a[i]<<' ';}
}
