#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
bool check(string c,int ll){
	if(c[0]>'Z'||c[0]<'A'){return 0;}
	for(int i=1;i<=ll;i++){
		if(c[i]>'z'||c[i]<'a'){return 0;}
	}
	return 1;
}
int main(){
	freopen("imena.in","r",stdin);
	freopen("imena.out","w",stdout);
	string s;
	cin>>n;
	while(cin>>s&&n){
		int len=s.length()-1;
		if(s[len]=='.'||s[len]=='!'||s[len]=='?'){
			cnt+=check(s,len-1);
			cout<<cnt<<endl;
			cnt=0;
			n--;
			continue;
		}
		cnt+=check(s,len);
	}
}
