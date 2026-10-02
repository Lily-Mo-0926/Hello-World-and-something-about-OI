#include<bits/stdc++.h>
using namespace std;
int n;
map<string,int>mp;
int main(){
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		cout<<s;
		if(mp[s]>0)cout<<'('<<mp[s]<<')';
		cout<<endl;
		mp[s]++;
	}
}
