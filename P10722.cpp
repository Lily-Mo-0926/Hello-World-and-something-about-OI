#include<bits/stdc++.h>
using namespace std;
bool a[100005],c[100005];
int lson[100005],rson[100005];
int n,q;
void pushtag(int m,int x){
	if(x==0){return;}
	c[x]^=m;
	a[x]^=c[x];
	pushtag(c[x],lson[x]);
	pushtag(c[x],rson[x]);
}
int main(){
	cin>>n;
	for(int i=2,fa;i<=n;i++){
		cin>>fa;
		if(lson[fa]){rson[fa]=i;}
		else{lson[fa]=i;}
	}
	for(int i=1;i<=n;i++){
		char s;
		cin>>s;
		a[i]=s-'0';
	}
	cin>>q;
	for(int i=0,tg;i<q;i++){
		cin>>tg;
		c[tg]=!c[tg]; 
	}
	pushtag(0,1);
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
}
