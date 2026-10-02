#include<bits/stdc++.h>
using namespace std;
int n,m,maxc,a[25],v[35000];
int pos,c,maxc,maxs,ans;
void dfs(int s,int )
int main(){
	string s1,s2="abc";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	cin>>s1;
	while(1){
		x=s1.find(s2,pos);
		if(x==-1) break;
		if(x-pos==2||c==0)c++;
		else maxc=max(maxc,c),v[c]++,c=1;
		pos=x+1;
	}
	maxc=max(maxc,c),v[c]++;
	//for(int i=1;i<=maxc;i++)cout<<v[i]<<' ';
	
}
