#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
queue<int> que;
queue<int> qu;
string s;
int an,ans[100001];
char a[1001][1001];
int qi[4][4]={-1,0, 0,1, 1,0, 0,-1};
int bfs(int e,int r)
{
	int vis[1001][1001];
	que.push(e);
	qu.push(r);
	while(!que.empty())
	{
		int x=que.front();
		int y=qu.front();
		vis[x][y]=1;
		que.pop();
		qu.pop();
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(a[x][y]!=a[x+qi[i][j]][y+qi[i][j]]&&vis[x+qi[i][j]][y+qi[i][j]]==0)
				{
					que.push(x+qi[i][j]);
					qu.push(y+qi[i][j]);
				} 
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(vis[i][j])
				{
					an++;
				}
			}
		}
	}
	return an;
}
//需要作一些《啸改动》:) 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=n;j++)
		{
			a[i][j]=s[j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		ans[i]+=bfs(x,y);
		
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<endl;
	} 
	return 0; 
}

