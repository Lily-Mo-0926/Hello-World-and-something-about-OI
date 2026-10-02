#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans,a[1000006];
map<pair<int,int>,bool>mp;
map<int,int>num;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num[a[i]]++;
		if(num[a[i]]>2){
			for(auto v:num){
				if(v.first!=a[i])mp[{v.first,a[i]}]=1;
				//cout<<": "<<v.first<<" "<<a[i]<<endl;
			}
		}
	}
	for(auto v:mp){
		ans+=v.second;
	}
	cout<<ans<<endl;
}
