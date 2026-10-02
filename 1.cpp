#include<bits/stdc++.h>
using namespace std;
int n,m,d[2001][2001];
char g[2001][2001];
int main(){
	freopen("path.in","r",stdin);
	freopen("path.out","w",stdout);
	cin>>n>>m;
	memset(d,0x3f3f,sizeof d);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
		}
	}
	d[1][1]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			d[i][j]=min(d[i][j],min(d[i][j-1]+(g[i][j]!=g[i][j-1]),d[i-1][j]+(g[i-1][j]!=g[i][j])));
		}
	}
	for(int i=n;i>0;i--){
		for(int j=m;j>0;j--){
			d[i][j]=min(d[i][j],min(d[i][j+1]+(g[i][j]!=g[i][j+1]),d[i+1][j]+(g[i+1][j]!=g[i][j])));
		}
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<d[i][j]<<' ';
		}
		cout<<endl;
	}*/
	cout<<d[n][m];
}
