#include<iostream>
using namespace std;

int dx[8]={1,2,2,1},dy[8]={2,1,-1,-2};
int n,m,ans;

int ok(int x,int y){
	return x<=m&&x>=0&&y>=0&&y<=n;
}

void f(int x,int y){
	if(x==m&&y==n)	{ ans++; return; }
	for(int i=0;i<4;i++){
		int xl=x+dx[i],yl=y+dy[i];
		if(ok(xl,yl))
			cout<<xl<<' '<<yl<<endl,
			f(xl,yl);
	}
}

int main(){
	cin>>n>>m;
	f(0,0);
	cout<<ans;
}
