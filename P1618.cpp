#include<bits/stdc++.h>
using namespace std;
bool b[15],flag=1;
float x,y,z;
int main(){
	cin>>x>>y>>z;
	for(int i=123;i<988;i++){
		if(x==0)break;
		memset(b,0,sizeof(b));
		b[i%10]=1;
		b[i/10%10]=1;
		b[i/100]=1;
		
		int j=i*y/x;
		if(j>1000)break;
		if(b[j%10])continue;
		else b[j%10]=1;
		if(b[j/10%10])continue;
		else b[j/10%10]=1;
		if(b[j/100])continue;
		else b[j/100]=1;
		
		int k=i*z/x;
		if(k>1000)break;
		if(b[k%10])continue;
		else b[k%10]=1;
		if(b[k/10%10])continue;
		else b[k/10%10]=1;
		if(b[k/100])continue;
		else b[k/100]=1;
		
		int sum=0;
		for(int n=1;n<10;n++){
			sum+=b[n];
		}
		if(sum==9){flag=0;cout<<i<<' '<<j<<' '<<k<<endl;}
	}
	if(flag){
		cout<<"No!!!";
	}
}
