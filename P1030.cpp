#include<bits/stdc++.h>
using namespace std;
string aft,mid;
void dfs(string suf,string me){
	int n=suf.length(),m=me.length(),k;
	if(m>0){
		char ch=suf[n-1];
		cout<<ch;
		k=me.find(ch);
		dfs(suf.substr(0,k),me.substr(0,k));
		dfs(suf.substr(k,n-1-k),me.substr(k+1));
	}
	
}
int main(){
	cin>>mid>>aft;
	dfs(aft,mid);
}
