#include<bits/stdc++.h>
using namespace std;
int a[300005][4],n,m;
int main(){
	cin>>n>>m;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		for(int j=1;j<4;j++)a[i][j]=a[i-1][j]+(x==j);
	}
	for(int i=0,l,r;i<m;i++){
		cin>>l>>r;
		for(int j=1;j<4;j++)cout<<a[r][j]-a[l-1][j]<<' ';
		cout<<endl;
	}
}
