#include <bits/stdc++.h>
using namespace std;

#define For(i, a, b) for (int i = a; i < b; i++)

int dp[101][1000001];

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, x, mod = 1000000007;
    cin >> n >> x;
    int coins[n];
    For(i, 0, n) cin >> coins[i];
    For(i, 1, x + 1) dp[0][i] = 0;
    For(i, 0, n + 1) dp[i][0] = 1;
    For(i, 1, n + 1)
    {
        For(j, 1, x + 1)
        {
            if (coins[i - 1] <= j)
                dp[i][j] = (dp[i][j - coins[i - 1]] % mod + dp[i - 1][j] % mod) % mod;
            else
                dp[i][j] = dp[i - 1][j];
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cout << dp[n][x] % mod;
    return 0;
}