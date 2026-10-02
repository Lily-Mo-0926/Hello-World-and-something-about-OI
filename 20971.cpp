#include<bits/stdc++.h>
using namespace std;
int n,m,cnta=10,cntb=10;
int a[10],b[10];
int main(){
	freopen("yoda.in","r",stdin);
	freopen("yoda.out","w",stdout);
	cin>>n>>m;
	for(int i=9;n;i--){a[i]=n%10;n/=10;cnta--;}
	for(int i=9;m;i--){b[i]=m%10;m/=10;cntb--;}
	for(int i=9;i>=0;i--){
		if(a[i]>b[i]){b[i]=-1;}
		else if(a[i]<b[i]){a[i]=-1;}
	}
	bool f1=1,f2=1;
	for(int i=cnta;i<10;i++){
		if(a[i]!=-1){n=n*10+a[i];f1=0;}
	}
	for(int i=cntb;i<10;i++){
		if(b[i]!=-1){m=m*10+b[i];f2=0;}
	}
	if(f1){cout<<"YODA"<<endl<<m;}
	else if(f2){cout<<n<<endl<<"YODA";}
	else{cout<<n<<endl<<m;}
}
