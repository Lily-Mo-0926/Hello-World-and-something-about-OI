#include<bits/stdc++.h>
using namespace std;
int n,a,b,m;
int main(){
	freopen("swap.in","r",stdin);
	freopen("swap.out","w",stdout);
	cin>>n>>a>>b>>m;
	if(a<b&&m>0){swap(a,b);}
	cout<<a<<' '<<b;
}
