#include<iostream>
#include<cstdio>
#include<set>
std::multiset<int> st[100005];
std::multiset<int> ans;
int n,q;
int g[100005],a[100005];
int main()
{
    scanf("%d%d",&n,&q);
    for(int i=1,ta,tb;i<=n;++i){
        scanf("%d%d",&ta,&tb);
        g[i]=tb;
        a[i]=ta;
        st[tb].insert(ta);
    }
    for(int i=1;i<=100000;++i){
        if(!st[i].empty()){
            ans.insert(*st[i].rbegin());
        }
    }
    for(int i=1,tc,td;i<=q;++i){
        scanf("%d%d",&tc,&td);
        st[g[tc]].erase(st[g[tc]].find(a[tc]));
        if(st[g[tc]].empty()){
            ans.erase(ans.find(a[tc]));
        }
        else if((*st[g[tc]].rbegin())<a[tc]){
            ans.erase(ans.find(a[tc]));
            ans.insert(*st[g[tc]].rbegin());
        }
        if(st[td].empty()){
            ans.insert(a[tc]);
        }
        else if((*st[td].rbegin())<a[tc]){
            ans.erase(ans.find(*st[td].rbegin()));
            ans.insert(a[tc]);
        }
        printf("%d",(*ans.begin()));
        st[td].insert(a[tc]);
        g[tc]=td;
    }

