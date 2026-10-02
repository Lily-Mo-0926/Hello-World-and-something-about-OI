#include<bits/stdc++.h>
using namespace std;
int n,a[3000006];
struct node{
	int id=0,num=0;
};
stack<node>st;
int main(){
	cin>>n;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		node ins;
		ins.id=i,ins.num=x;
		while(!st.empty()&&st.top().num<x){
			if(a[st.top().id]==0){
				a[st.top().id]=i;
			}
			//cout<<st.top().id<<' '<<st.top().num<<endl;
			st.pop();
		}
		st.push(ins);
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
}
