#include<bits/stdc++.h>
using namespace std;
const int N=1007;
int a[N][N],stk[N],tp;
char s[5];
int main(){
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s;
			if(*s=='F'){a[i][j]=a[i-1][j]+1;}
		}
		tp=0;
		for(int j=1;j<=m+1;j++){
			while(tp&&a[i][stk[tp]]>=a[i][j]){
				ans=max(ans,a[i][stk[tp]]*(j-stk[tp-1]-1)),tp--;
			}
			stk[++tp]=j;
		}
	}
	cout<<ans*3;
}
