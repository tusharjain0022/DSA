#include <bits/stdc++.h>
 
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
int dp[1000001];
int solve(vector<int> coin,int sum,int n){
    // if(sum==0)
    //     return 1;
    // if(dp[sum]!=-1)
    //     return dp[sum];
    // int answer = 0;
    dp[0] = 1;
    For(i,1,sum+1){
        int ans = 0;
        For(j,0,n){
if(coin[j]<=i)
    ans = (ans + dp[i - coin[j]]) % mod;
else
    break;
        }
        dp[i] = ans;
    }
    return dp[sum];
    // For(i,0,1){
    //     if(coin[i]<=sum)
    //         answer = (answer + solve(coin, sum - coin[i],n)) % mod;
    //     else
    //         break;
    // }
    // return dp[sum] = answer;
}

int main()
{
     fast_io;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
   
    int n,x;
    cin >> n>>x;
    memset(dp, -1, sizeof(dp));
    vector<int> ar(n);
    For(i, 0, n) cin >> ar[i];
    sort(ar.begin(), ar.end());
    cout << solve(ar, x,n);

    return 0;
}