#include <bits/stdc++.h>
 
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
lli dp[501][62626];
lli knapsack(int i,int sum){
    if(sum==0)
        return 1;
    if(i==0)
        return 0;
    if(dp[i][sum]!=-1)
        return dp[i][sum];
    if(i<=sum)
        return dp[i][sum] = (knapsack(i - 1,sum - i) +  knapsack(i - 1,sum))%mod;
    else
        return dp[i][sum] =  knapsack(i - 1,sum);
}

int main()
{
     fast_io;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
   
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    int sum = n * (n + 1) / 2;
    if(sum%2!=0)
        cout << 0;
    else
        cout << knapsack(n-1,sum/2);

    return 0;
}