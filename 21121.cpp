#include<bits/stdc++.h>
using namespace std;
int cnt,s1,s2,a[4],b[4];
int main(){
	cin>>s1;for(int i=0;i<4;i++){cin>>a[i];}
	cin>>s2;for(int i=0;i<4;i++){cin>>b[i];}
	if(a[0]>a[2])swap(a[0],a[2]);
	if(a[1]>a[3])swap(a[1],a[3]);
	if(b[0]>b[2])swap(b[0],b[2]);
	if(b[1]>b[3])swap(b[1],b[3]);
	for(int i=-1000;i<1001;i++){
		for(int j=-1000;j<1001;j++){
			cnt+=((a[0]<=i&&i<=a[2]&&a[1]<=j&&j<=a[3])
				 +(b[0]<=i&&i<=b[2]&&b[1]<=j&&j<=b[3])==2);
		}
	}
	cout<<(!cnt?"NO":(cnt==1?"POINT":"SEGMENT"));
}
