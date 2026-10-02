#include<bits/stdc++.h>
using namespace std;
int a[404][404],b[404][404],n,ans;
int main(){
	cin>>n;
	for(int i=1,x;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>x;
			a[i][j]=a[i-1][j-1]+x;
			b[i][j]=b[i-1][j+1]+x;
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=i;k<=n;k++){
				ans=max(ans,(a[j][k]-a[j-i][k-i])-(b[j][k+1-i]-b[j-i][k+1]));
			}
		}
	}
	cout<<ans;
}
