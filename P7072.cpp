#include<bits/stdc++.h>
using namespace std;
int n,w;
int a[605];
int main(){
	cin>>n>>w;
	for(int i=1;i<=n;i++){
		int p=max(1,i*w/100),x,cnt=0;
		cin>>x;
		a[x]++;
		for(int v=600;v>=0;v--){
			cnt+=a[v];
			if(cnt>=p){
				cout<<v<<' ';
				break;
			}
		}
	}
}
