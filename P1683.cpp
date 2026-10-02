#include<bits/stdc++.h>
using namespace std;
int h,w;
bool vis[25][25];
int g[25][25];
queue<pair<int,int> >q;
int main(){
	int sx,sy;
	cin>>h>>w;
	for(int i=1;i<=h;i++){//hÐÐwÁÐ g[h][w] hx wy
		for(int j=1;j<=w;j++){
			char c;
			cin>>c;
			if(c=='@')g[i][j]=1,sx=i,sy=j;
			else g[i][j]=(c=='.'?1:0);
		}
	}
	
}
