#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
void solve()
{
    int n, x;
    cin >> n >> x;
    int coins[n],dp[n][x+1];
    For(i, 0, n) dp[i][0] = 0;
    For(i, 0, n) cin >> coins[i];
    For(i,0,n){
        For(j,1,x+1){
            
        }
    }
}
int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
