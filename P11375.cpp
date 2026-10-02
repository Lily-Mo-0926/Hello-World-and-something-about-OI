#include<bits/stdc++.h>
using namespace std;
int n;
long long s;
stack<int>sn,s1;
int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		//cout<<c<<endl;
		if(c=='U'){
			if(!sn.empty()&&sn.top()!=0){
				sn.pop();
			}else{
				sn.push(0);
			}
		}else if(c=='L'){
			sn.push(1);
		}else if(c=='R'){
			sn.push(2);
		}
	}
	while(!sn.empty()){
		int x=sn.top(); 
		//cout<<x<<endl;
		s1.push(x);
		sn.pop();
	}
	while(!s1.empty()){
		int h=s1.top();
		if(h==0){s=max(1ll,s/2);}
		else{s=s*2+(h-1ll);}
		s1.pop();
	}
	cout<<s;
}
