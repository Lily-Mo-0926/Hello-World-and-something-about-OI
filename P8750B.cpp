#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	for(int i=1;i<2022;i++){
		for(int j=1;j<2022;j++){
			if(i*j<=2021){
				n++;
			}
		}
	}
	cout<<n;
}
