#include<bits/stdc++.h>
using namespace std;
int n;
long long f[61];
int main(){
	cin>>n;
	f[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<4;j++){
			if(i>=j){
				f[i]+=f[i-j];
			}
		}
	}
	cout<<f[n];}
