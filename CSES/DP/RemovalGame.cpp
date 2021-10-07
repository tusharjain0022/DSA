#include <bits/stdc++.h>
 
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
lli dp[5001][5001][2];

int solve(lli x[],int i,int j,int& ans)
{
   
}
int main()
{
     fast_io;
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    memset(dp,0,sizeof(dp));
   
    int n,ans=0;
    cin >> n;
    lli x[n];
    For(i, 0, n) cin >> x[i];
    cout<<solve(x, 0, n - 1,ans);


    return 0;
}