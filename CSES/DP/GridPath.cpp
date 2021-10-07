#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    lli dp[n][n];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    For(i,0,n){
        string s;
        cin >> s;
        For(j,0,n)
        {
            if(s[j]=='*')
                dp[i][j] = 0;
            else 
            {
                if(i>0)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
                if(j>0)
                    dp[i][j] = (dp[i][j] + dp[i][j - 1]) % mod;
            }
        }
    }
    cout << dp[n-1][n-1];
}
int main()
{

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int t =1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
