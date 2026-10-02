#include<bits/stdc++.h>
using namespace std;
int n,a[30],ans;
void/*?*/ dfs(int id){
	if(id>=2*n-1){
		if(cal())ans++;
		return;
	}
	a[id+1]=1;
	dfs(id+2);
	a[id+1]=2;
	dfs(id+2);
	a[id+1]=3;
	dfs(id+2);
}
bool cal(){
	for(int i=0;i<n*2;i+=2)
}
int main(){
	cin>>n;
	a[0]=1;//+:1 -:2 *:3
	for(int i=1;i<n*2;i+=2){
		cin>>a[i];
	}
	
}
