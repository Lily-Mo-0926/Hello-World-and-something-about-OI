#include <bits/stdc++.h>

const int inf=1e9+7;
const int MOD=998244353;
const int MAXN=105;
const int MAXM=2050;

using namespace std;

int n, m, k;
int dp[MAXN][MAXM];

int main() {
    cin >> n >> m >> k;
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            for(int d = 0; d <= k; d++) {
                if(j - d >= 0) {
                    dp[i][j] += dp[i-1][j-d];
                    dp[i][j] %= MOD;
                }
            }
        }
    }
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=m;j++){
    		cout<<dp[i][j]<<' ';
		}
		cout<<'\n';
	}
    cout << dp[n][m] << endl;

    return 0;
}
