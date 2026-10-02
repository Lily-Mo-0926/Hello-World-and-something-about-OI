#include<bits/stdc++.h>
using namespace std;
int n,a[1001],pre[1001],ans=1010;
int main(){
//	freopen("queue.in","r",stdin);
//	freopen("queue.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>c;
		a[i]=(c=='W');
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=0;i<=n;i++){
		ans=min(ans,i-pre[i]+(pre[n]-pre[i]));
	}
	cout<<ans;
}
