#include<bits/stdc++.h>
using namespace std;
int a,d1,d2;
int main(){
	cin>>a;
	for(int i=1;a;i++){
		if(a%3==1&&!d1){
			d1=i;
		}
		a-=a/3+(a%3>0);
		d2++;
	}
	cout<<d2<<' '<<d1;
}
