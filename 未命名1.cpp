#include<bits/stdc++.h>
using namespace std;
int n,c;
int main(){
	cin>>n;
	float c=0,q=0.0;
	for(int i=0;i<n;i++){
		float a;
		string s;
		cin>>a>>s;
		if(s=="P"||s=="N"){
			continue;
		}
		else if(s=="A"){
			c+=a;
			q=q+a*4.0;
		}
		else if(s=="A-"){
			c+=a;
			q=q+a*3.7;
		}
		else if(s=="B+"){
			c+=a;
			q=q+a*3.3;
		}
		else if(s=="B"){
			c+=a;
			q=q+a*3.0;
		}
		else if(s=="B-"){
			c+=a;
			q=q+a*2.7;
		}
		else if(s=="C+"){
			c+=a;
			q=q+a*2.3;
		}
		else if(s=="C"){
			c+=a;
			q=q+a*2.0;
		}
		else if(s=="C-"){
			c+=a;
			q=q+a*1.7;
		}
		else if(s=="D"){
			c+=a;
			q=q+a*1.3;
		}
		else if(s=="D-"){
			c+=a;
			q=q+a*1.0;
		}
		else if(s=="F"){
			c+=a;
		}
	printf("%.2f\n",q);
	}
	q=q*1.0/c;
	printf("%.2f",q);
}
