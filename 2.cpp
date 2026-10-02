#include<bits/stdc++.h>
using namespace std;
int bfs(string s){
	queue<string> q;
	map<string,int> d;
	q.push(s),d[s]=0;
	int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	while(!q.empty()){
		string t=q.front();
		q.pop();
		int D=d[t],k=t.find('x'),x=k/3,y=k%3;
		if(t=="12345678x")return D;
		for(int i=0;i<4;i++){
			int a=x+dx[i],b=y+dy[i];
			if(a>=0&&a<3&&b>=0&&b<3){
				swap(t[k],t[a*3+b]);
				if(!d.count(t))
					d[t]=D+1,q.push(t);
				swap(t[k],t[a*3+b]);
			}
		}
	}
	return -1;
}
int main(){
	string s;
	for(int i=0;i<9;i++){
		char c;
		cin>>c,s+=c;
	}
	cout<<bfs(s);
}
