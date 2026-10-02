#include<bits/stdc++.h>
using namespace std;
char s[6];
int main(){
	cin>>s;
	int n=strlen(s);
	cout<<s<<endl;
	while(next_permutation(s,s+n)){
		cout<<s<<endl;
	}
}
