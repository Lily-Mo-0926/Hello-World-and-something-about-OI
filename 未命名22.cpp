#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,f,h[256],e[N];
char c[N],a[N],b[N];
int main(){
	cin>>n;
	scanf("%s",c+1);
	for(int i=1;i<=n;i++){
		e[i]=h[c[i]];
		h[c[i]]=i;
	}
	int z=n,y=97;
	for(int i=1;i<=n/2;i++){
		while(h[c[z]]!=z)z--;
		a[i]=c[z];
		h[c[z]]=e[z];
		while(!h[y])y++;
		b[i]=y;
		h[y]=e[h[y]];
		if(!f&&b[i]!=a[i])
			f=(b[i]<a[i])?1:2;
	}
	puts(f==1?"DA":"NE");
	puts(b+1);
}
