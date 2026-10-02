#include<bits/stdc++.h>
using namespace std;
int n,cnt;
int a[128];
int main(){
	cin>>n;
	if(n%2){cout<<-1;return 0;}
	while(n){
		a[cnt++]=n%2;
		n>>=1;
	}
	for(int i=cnt;i>0;i--){
		if(a[i])cout<<(1<<i)<<' ';
	}
}
