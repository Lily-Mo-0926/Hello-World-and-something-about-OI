#include<bits/stdc++.h>
using namespace std;
int n,f[100005];
int main(){
	cin>>n;
	memset(f,0x7f,sizeof f);
	f[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j*j<=i;j++){
			f[i]=min(f[i],f[i-j*j]+1);
		}
	}
	cout<<f[n];
}
