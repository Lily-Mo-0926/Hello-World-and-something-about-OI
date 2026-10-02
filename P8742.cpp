#include<bits/stdc++.h>
using namespace std;
int n,a[101],tot,ans;
int f[101][200005];//f[选或不选共i个][j重量可行]
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		tot+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=tot;j;j--){
			f[i][j]=(j==a[i])||(f[i-1][j])||(f[i-1][j+a[i]])||(f[i-1][abs(j-a[i])]);
			printf("%d ",f[i][j]); 
		}
		printf("\n");
	}
	//printf("%d ",i);dfs(1,0);
	for(int j=1;j<=tot;j++){
		ans+=f[n][j];
	}
	printf("%d",ans);
}
/*
#include<cstdio>
#include<cmath>
using namespace std;
int n,ans,sum,w[101],dp[101][100001];
int main(){
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
        scanf ("%d",&w[i]);
        sum+=w[i];
    }
    for(int i=1;i<=n;i++){
		for(int j=sum;j;j--){
/*            if(j==w[i])dp[i][j]=1;
            else if(dp[i-1][j])dp[i][j]=1;
			else if(dp[i-1][j+w[i]])dp[i][j]=1;
            else if(dp[i-1][abs(j-w[i])])dp[i][j]=1;*//*
            dp[i][j]=(j==w[i])||(dp[i-1][j])||(dp[i-1][j+w[i]])||(dp[i-1][abs(j-w[i])]);
			printf("%d ",dp[i][j]); 
        }
        printf("\n");
	}  
    for(int i=1;i<=sum;i++)if(dp[n][i])ans++;
    printf ("%d",ans);
    return 0;
}*/
