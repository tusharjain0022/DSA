#include <bits/stdc++.h>
 
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
int dp[501][501];

int main()
{
     fast_io;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    memset(dp, -1, sizeof(dp));
    int a, b;
    cin >> a >> b;
    For(i,1,a+1){
        For(j,1,b+1){
            
            if(i==j){
                dp[i][j] = 0;
                // cout << dp[i][j] << " ";
                continue;
            }
            int ans = INT_MAX;
    
            For(k,1,i)
                ans = min(ans, dp[k][j] + dp[i - k][j]);
            For(k, 1, j)
                ans = min(ans, (dp[i][k] + dp[i][j - k]));
            dp[i][j] = 1+ans;
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cout << dp[a][b];

    return 0;
}