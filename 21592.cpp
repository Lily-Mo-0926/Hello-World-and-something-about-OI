#include<bits/stdc++.h>
using namespace std;
int n,m;
int mx,my,nx=15,ny=15;
bool a[15][15],b[15][15];
bool check(int x,int y){
	if(!a[x][y]){return 0;}
	int sum=a[x-1][y]+a[x][y-1]+a[x+1][y]+a[x][y+1];
	return sum>1;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;cin>>c;
			a[i][j]=(c=='X'?1:0);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[i][j]=check(i,j);
			if(b[i][j]){
				mx=max(mx,i);
				my=max(my,j);
				nx=min(nx,i);
				ny=min(ny,j);
			}
		}
	}
	for(int i=nx;i<=mx;i++){
		for(int j=ny;j<=my;j++){
			cout<<(b[i][j]?'X':'.');
		}
		cout<<endl;
	}
}
