#include<bits/stdc++.h>
using namespace std;
queue <int> q;
int n;
int main(){
	cin>>n;
	while(n--){
		int a,b;
		cin>>a;
		if(a==1){
			cin>>b;
			q.push(b);
		}else if(a==2){
			if(!q.empty())q.pop();
			else cout<<"ERR_CANNOT_POP\n"; 
		}else if(a==3){
			if(!q.empty())cout<<q.front()<<"\n";
			else cout<<"ERR_CANNOT_QUERY\n";
		}else{
			cout<<q.size()<<"\n";
		}
	}
} 

