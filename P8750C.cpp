#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
	for(int a=1;a<2022;a++){
		for(int b=1;b<2022;b++){
			for(int c=1;c<2022;c++){
				for(int d=1;d<2022;d++){
					int e=2021-a-b-c-d;
					if(e>0)n++;
				}
			}
		}
	}
	cout<<n;
}
