#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int m=s.length()-1;
		if(s[m]=='y'){
			if(s[m-1]=='a'||s[m-1]=='e'||s[m-1]=='i'||s[m-1]=='o'||s[m-1]=='u'){cout<<s<<"s";}
			else{s[m]='i';cout<<s<<"es";}
		}
		else if(s[m]=='s'||s[m]=='z'||s[m]=='x'){cout<<s<<"es";}
		else if(s[m]=='h'){
			if(s[m-1]=='c'||s[m-1]=='s'){cout<<s<<"es";}
			else{cout<<s<<"s";}
		}
		else{cout<<s<<"s";}
		cout<<endl;
	}
}
