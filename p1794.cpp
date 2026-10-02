#include<bits/stdc++.h>
using namespace std;
int v,g,n;
int a[501][3];
int f[2][501][501];
int main(){
	cin>>v>>g;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	for(int i=1;i<=n;i++){
		for(int j=v;j>=0;j--){
			for(int k=g;k>=0;k--){
				f[i%2][j][k]=f[(i-1)%2][j][k];
				if(j>=a[i][1]&&k>=a[i][2]){
					f[i%2][j][k]=max(f[i%2][j][k],f[(i-1)%2][j-a[i][1]][k-a[i][2]]+a[i][0]);
				}
			}
		}
	}
	cout<<f[n%2][v][g];
}
