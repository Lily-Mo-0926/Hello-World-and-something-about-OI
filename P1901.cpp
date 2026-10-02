#include<bits/stdc++.h>
using namespace std;
struct node{
	int h,v;
}a[1000005];
stack<int> sta;
int n;
int cnt[1000005],ans=-1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a[i].h,&a[i].v);//&a[i] is able???
		while(!sta.empty()&&a[sta.top()].h<a[i].h){
			cnt[i]+=a[sta.top()].v;
			sta.pop();
		}
		sta.push(i);
		//cout<<':'<<cnt[i]<<endl;
	}
	//cout<<endl;
	while(!sta.empty()){sta.pop();}
	for(int i=n;i>0;i--){
		while(!sta.empty()&&a[sta.top()].h<a[i].h){
			cnt[i]+=a[sta.top()].v;
			sta.pop();
		}
		ans=max(ans,cnt[i]);
		sta.push(i);
		//cout<<cnt[i]<<' ';
	}
	//cout<<endl;
	cout<<ans;
}
