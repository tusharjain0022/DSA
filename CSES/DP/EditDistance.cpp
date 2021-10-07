#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
int dp[5001][5001];



void solve()
{
    string a, b;
    cin >> a;
    cin >> b;

    int a1 = a.length();
    int a2 = b.length();
    for (int i = 0; i <= a1; i++)
        for (int j = 0; j <= a2;j++){
            if (i == 0)
                dp[i][j] = j;
            else if (j==0)
                dp[i][j]=i;

            else if (a[i-1]==b[j-1])
                dp[i][j]=dp[i - 1][ j - 1];
            else
               dp[i][j]=1+min(dp[i - 1][ j-1],
                 min(dp[i][ j - 1],dp[i-1][j]));
    }
    cout << dp[a1][a2] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     memset(dp, -1, sizeof(dp));

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
