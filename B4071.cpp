#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1001;
ll n,m,p[maxn],c[maxn];
ll cnt[maxn];
vector<int> cs[maxn];
ll ans=1e18;
ll f(int ii){
	ll curcnt=cnt[1],res=0;
	vector<int>tmp;
	for(int i=2;i<=n;i++){
		int b=max((int)(cs[i].size()-ii+1),0);
		for(int j=0;j<b;j++){
			res+=cs[i][j];
		}
		curcnt+=b;
		for(int j=b;j<cs[i].size){
			tmp.push_back(cs[i][j]);
		}
	}
	sort(tmp.begin(),tmp.end())
	for(int i=0;i<ii-curcnt;i++){
		res+=tmp[i];
	}
	return res;
}
int main(){
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>p[i]>>c[i];
		cnt[p[i]]++;
		cs[p[i]].push_back(c[i]);
	}
	for(ll i=1;i<=n;i++){
		sort(cs[i].begin,cs[i].end);
	}
	for(ll i=max(cnt[1],1ll);i<=m;i++){
		ans=min(ans,f(i));
	}
	cout<<ans<<endl;
}
