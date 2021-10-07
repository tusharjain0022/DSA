#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007

lli dp[100001][101];

void solve()
{
    int n, m;
    memset(dp, 0, sizeof(dp));
    cin >> n >> m;
    int x[n];
    For(i, 0, n) cin >> x[i];

    if (x[0] == 0)
        For(i, 1, m + 1)
            dp[0][i] = 1;
    if (x[0] != 0)
        dp[0][x[0]] = 1;

    For(i, 1, n)
    {
        For(j, 1, m + 1)
        {

            if (x[i] != 0)
            {
                dp[i][x[i]] = ((dp[i - 1][x[i]] + dp[i - 1][x[i] - 1])%mod + dp[i - 1][x[i] + 1])%mod;
                break;
            }
            else
            {
                dp[i][j] = ((dp[i - 1][j - 1] + dp[i - 1][j])%mod + dp[i - 1][j + 1])%mod;
            }
        }
    }
    lli ans = 0;
    // For(i,0,n){
    //     For(j, 0, m + 1) cout << dp[i][j] << " ";
    //     cout << endl;
    // }
    For(i, 1, m + 1) ans = (ans+dp[n - 1][i])%mod;
    cout << ans << endl;
}
int main()
{

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
