#include<bits/stdc++.h>
using namespace std;
int n,m;
int f[26][30001];
int c[26],v[26];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		c[i]=a,v[i]=a*b;
	}
	for(int i=1;i<=m;i++){
		for(int j=n;j>=0;j--){
			f[i][j]=f[i-1][j];
			if(j>=c[i])
				f[i][j]=max(f[i][j],f[i-1][j-c[i]]+v[i]);
		}
	}
	printf("%d",f[m][n]);
}
