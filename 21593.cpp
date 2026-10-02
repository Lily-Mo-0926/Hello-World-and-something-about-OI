#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	int x,y;
}a[100005];
long long ans;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans+=1ll*(a[i].x-a[j].x)*(a[i].x-a[j].x)+1ll*(a[i].y-a[j].y)*(a[i].y-a[j].y);
		}
	}
	cout<<ans;
}
