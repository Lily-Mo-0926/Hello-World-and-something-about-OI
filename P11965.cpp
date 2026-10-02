#include<bits/stdc++.h>
using namespace std;
long long ans;
int n,x=0,cnt[68000000];
string s;
int main(){
	cin>>n;
	cin>>s;
	s=" "+s;
	cnt[0]=1;
	for(int i=1;i<=n;i++){
		x^=(1<<s[i]-'a');
		ans+=cnt[x];
		cnt[x]++;
	}
	cout<<ans;
}
