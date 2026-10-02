#include<bits/stdc++.h>
using namespace std;
int n=1;
int main(){
	for(int i=1;i<2022;i+=2){
		n=(n*i)%100000;
	}
	cout<<n;
}
