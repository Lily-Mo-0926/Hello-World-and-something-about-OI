#include<bits/stdc++.h>
using namespace std;
int n,m,ans=3000;
char a[51][51];
int check(int x,int y){
	int i,cnt=0;
	for(i=1;i<=x;i++){
		for(int j=1;j<=m;j++){
			cnt+=(a[i][j]!='W');
		}
	}
	for(;i<=y;i++){
		for(int j=1;j<=m;j++){
			cnt+=(a[i][j]!='B');
		}
	}
	for(;i<=n;i++){
		for(int j=1;j<=m;j++){
			cnt+=(a[i][j]!='R');
		}
	}
	return cnt;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]+1;
	}
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			ans=min(ans,check(i,j));
		}
	}
	cout<<ans;
}
