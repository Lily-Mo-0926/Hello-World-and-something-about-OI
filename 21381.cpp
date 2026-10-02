#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],fa,go;
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int p;
		string s;
		cin>>p>>s;
		if(!a[p]){
			if(s=="WA")fa++;
			else{
				a[p]=1;
				go++;
			}
		}
	}
	cout<<go<<' '<<fa;
}
