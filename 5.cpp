#include<bits/stdc++.h>
using namespace std;
int n,ans;
char c[100005];
int main(){
	cin>>n>>c;
	for(int i=0;i<n;i++){
		if(c[i]>='a'&&c[i]<='z'){
			ans+=c[i]-'a'+1;
		}
		else{
			ans-=c[i];
		}
	}
	cout<<ans;
	return 0;
}
