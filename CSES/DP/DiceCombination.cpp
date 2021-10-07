#include <bits/stdc++.h>
using namespace std;

int dp[1000001];

int solve(int sum)
{   
    // Base condition
    if (sum == 1 || sum==0)
        return 1;

    // If dp[sum] is already calculated return it
    else if (dp[sum] != 0)
        return dp[sum];

    for (int i = 1; i <= min(6,sum); i++)
            (dp[sum] += solve(sum - i))%=1000000007 ;
    return dp[sum];
}

int main()
{
    memset(dp, 0, sizeof(dp));
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}