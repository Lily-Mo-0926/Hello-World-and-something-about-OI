#include<bits/stdc++.h>
using namespace std;
int n;
struct sc{
	int c,m,e,sum,cm,num,pm;
}a[10005];
bool cmp1(sc x,sc y){
	if(x.sum==y.sum){
		if(x.cm==y.cm){
			int a=max(x.c,x.m),b=max(y.c,y.m);
			if(a==b){
				return 0;
			}else{return a>b;}
		}else{return x.cm>y.cm;}
	}else{return x.sum>y.sum;}
}
bool cmp2(sc x,sc y){
	return x.num<y.num;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].c>>a[i].m>>a[i].e;
		a[i].cm=a[i].c+a[i].m;
		a[i].sum=a[i].cm+a[i].e;
		a[i].num=i;
	}
	sort(a+1,a+1+n,cmp1);
	for(int i=1,cnt=1;i<=n;i++){
		if(a[i-1].sum==a[i].sum&&
		a[i-1].cm==a[i].cm&&
		max(a[i-1].c,a[i-1].m)==max(a[i].c,a[i].m)){a[i].pm=cnt;}
		else{
			cnt=i;
			a[i].pm=cnt;
		}
	}
	sort(a+1,a+1+n,cmp2);
	for(int i=1;i<=n;i++){
		cout<<a[i].pm<<endl;
	}
}
