#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],s[200005],d,b;
long long gcd(long long x,long long y) {
    if(y==0){return x;}
    return gcd(y,x%y);
}
int main(){
    freopen("gcd.in","r",stdin);
    freopen("gcd.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=a[i]-a[i-1];
    }
    d=s[2];
    for(int i=3;i<=n;i++){
        d=gcd(s[i],d);
        if(d==1)break;
    }
    //cout<<d<<endl;
    for(int i=1;i<=m;i++){
        cin>>b;
        cout<<gcd(a[1]+b,d)<<' ';
    }
}
