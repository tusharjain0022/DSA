#include <bits/stdc++.h>
 
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
lli dp[1000001][3];
 
lli solve(int n,int type)
{
    if(n==0)
        return 1;
    if (dp[n][type]!=-1)
        return dp[n][type];

    if(type==1 )
        return dp[n][type]=(2*solve(n-1,1)+solve(n-1,2))%mod;
    else
        return dp[n][type]=(solve(n - 1, 1) + 4 * solve(n - 1, 2))%mod;
}
int main()
{
 
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
 
    int t ;
    cin >> t;
 
    while (t--)
    {
        int n;
        memset(dp, -1, sizeof(dp));
        cin >> n;
        cout << (solve(n-1, 0)+solve(n-1,1))%mod<<endl;
    }
    return 0;
}