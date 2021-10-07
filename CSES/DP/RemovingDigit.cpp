#include <bits/stdc++.h>
using namespace std;

#define For(i, a, b) for (int i = a; i < b; i++)

int dp[1000001];

int solve(int n)
{
    if (n == 0)
        return 0;
    else if (n < 10)
        return 1;
    else if (dp[n] != -1)
        return dp[n];
    else
    {
        int m = INT_MAX, temp = n;

        while (n != 0)
        {
            if (n % 10 != 0)
                m = min(solve(temp - n % 10), m);
            n /= 10;
        }
        return dp[temp] = 1 + m;
    }
}

int main()
{
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    For(i, 1, 10) dp[i] = 1;
    int n;
    cin >> n;
    cout << solve(n);
    // For(i, 0, n + 1) cout << dp[i] << " ";
}
