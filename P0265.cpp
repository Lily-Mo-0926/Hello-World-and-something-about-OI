#include<bits/stdc++.h>
using namespace std;
int g[1005][1005];
int n,m,a,b;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>g[i][j];
			a+=(i==m)*g[i][j];
			b+=(j==m)*g[i][j]; 
		}
	}
	printf("%d %d %d",a,b,a+b); 
}
