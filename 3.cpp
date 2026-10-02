#include<bits/stdc++.h>
using namespace std;
int n,m,last[1000005],x;
bool f[1000005];
int main(){
	freopen("km.in","r",stdin);
	freopen("km.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(i-last[x]>m)f[x]=1;
		last[x]=i;
	}
	for(int i=0;;i++){
		if(n-last[i]>=m||f[i]==1){
			cout<<i;
			return 0;
		}
	}
}
