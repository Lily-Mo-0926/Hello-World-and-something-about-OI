#include<bits/stdc++.h>
using namespace std;
int n,maxx,minx=101,maxy,miny=101;
int main(){
	cin>>n;
	for(int i=1,x,y;i<=n;i++){
		cin>>x>>y;
		maxx=max(maxx,x); minx=min(minx,x);
		maxy=max(maxy,y); miny=min(miny,y);
	}
	maxx-=minx; maxy-=miny;
	maxx=max(maxx,maxy);
	maxx*=maxx;
	cout<<maxx;
}
