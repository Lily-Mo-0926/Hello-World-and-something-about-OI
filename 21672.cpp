#include<bits/stdc++.h>
using namespace std;
int n;
int t[5];
int main(){
	cin>>n;
	for(int i=0,x;i<n;i++){
		cin>>x;
		t[x]++;
	}
	int k=min(t[3],t[1]);
	t[4]+=k;
	t[3]-=k;
	t[1]-=k;
	cout<<t[4]+t[3]+(t[2]*2+t[1]*1+4-1)/4<<endl;
} 
