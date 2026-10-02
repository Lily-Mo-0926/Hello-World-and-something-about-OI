#include<bits/stdc++.h>
using namespace std;
int a[11],tmp;
int b[27][2]={2,1, 2,2, 2,3, 3,1, 3,2, 3,3, 4,1, 4,2, 4,3, 5,1, 5,2, 5,3, 6,1, 6,2, 6,3, 7,1, 7,2, 7,3, 7,4, 8,1, 8,2, 8,3, 9,1, 9,2, 9,3, 9,4};
string s;
vector<char>c;
int main(){
	//for(int i=1;i<27;i++){cout<<b[i][0]<<' '<<b[i][1]<<endl;}
	for(int i=1,x;i<=9;i++){
		cin>>x;
		a[x]=i;
	}
	cin>>s;
	for(int i=0;i<s.length();i++){
		int k=s[i]-'a';
		int x=a[b[k][0]];
		if(tmp==x){c.push_back('#');} 
		for(int j=0;j<b[k][1];j++){
			c.push_back(x+'0');
			tmp=x;
		}
	}
	for(auto i: c){
		cout<<i;
	}
}
