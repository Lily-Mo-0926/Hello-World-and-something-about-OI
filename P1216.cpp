#include<bits/stdc++.h>
using namespace std;
int r,e[1001][1001];
int f[1001][1001],ans;
int main(){
	cin>>r;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			cin>>e[i][j];
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			f[i][j]=max(f[i-1][j],f[i-1][j-1])+e[i][j];
		}
	}
	for(int i=1;i<=r;i++){
		ans=max(ans,f[r][i]);
	}
	cout<<ans;
}
