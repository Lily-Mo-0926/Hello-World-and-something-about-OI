#include<bits/stdc++.h>
using namespace std;
string s;
int f=1,sum,n;
bool cmp(char x,char y){
	return x>y;
}
int main(){
	cin>>s;
	for(int i=0;i<s.length();i++){
		sum+=s[i]-'0';
		if(f&&s[i]=='0'){f=0;}
	}
	if(f||sum%3){cout<<-1;return 0;}
	sort(s.begin(),s.end(),cmp);
	for(int i=0;i<s.length();i++){
		cout<<s[i];
	}
}
