#include<bits/stdc++.h>
using namespace std;
int n;
int r[205][205];
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			cin>>r[i][j];
		}
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<r[i][j]<<' ';
		}cout<<endl;
	}
}