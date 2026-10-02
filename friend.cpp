#include<bits/stdc++.h>
using namespace std;
int n,ans;
int a[1000005][10]; 
int main(){
	freopen("friend.in","r",stdin);
	freopen("friend.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		cin>>x;
		while(x){
			a[i][x%10]++;
			x/=10;
		}
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=0;k<10;k++){
				if(a[i][k]&&a[j][k]){
					ans++;
					break;
				}
			}
		}
	}
	cout<<ans;
}
