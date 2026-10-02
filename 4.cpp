#include<bits/stdc++.h>
using namespace std;
struct P{
	string x,r;
};
void bfs(string s){
	queue<P> q;
	map<string,int> d;
	q.push({s,""}),d[s]=0;
	int dx[]={1,0,0,-1},dy[]={0,-1,1,0};
	char w[]={"DLRU"};
	while(!q.empty()){
		string t=q.front().x,l=q.front().r;
		q.pop();
		int D=d[t],k=t.find('x'),x=k/3,y=k%3;
		if(t=="12345678x"){
			cout<<l;
			return;
		}
		for(int i=0;i<4;i++){
			int a=x+dx[i],b=y+dy[i];
			if(a>=0&&a<3&&b>=0&&b<3){
				swap(t[k],t[a*3+b]);
				if(!d.count(t))
					d[t]=D+1,q.push({t,l+w[i]});
				swap(t[k],t[a*3+b]);
			}
		}
	}
	cout<<-1;
	return;
}
int main(){
	string s;
	for(int i=0;i<9;i++){
		char c;
		cin>>c,s+=c;
	}
	bfs(s);
}
