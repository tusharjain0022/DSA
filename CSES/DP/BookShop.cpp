#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
int dp[1001][100001];

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n, x;
    cin >> n >> x;
    int h[n], s[n];
    For(i, 0, n) cin >> h[i];
    For(i, 0, n) cin >> s[i];
    For(i, 0, n + 1)
        For(j, 0, x + 1)
    {
        if (i == 0 || j == 0)
            dp[i][j] = 0;

        else if (h[i - 1] <= j)
            dp[i][j] = max(s[i - 1] + dp[i - 1][j - h[i - 1]], dp[i - 1][j]);
        else
            dp[i][j] = dp[i - 1][j];
    }
    cout << dp[n][x];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("../test_input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
