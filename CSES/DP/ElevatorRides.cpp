#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int

void solve()
{
   int n,x;
    cin >> n >> x;
    int w[n];
    For(i, 0, n) cin >> w[i];
    pair<int, int> dp[(1 << n)];
    dp[0] = {1, 0};
    For(s,1,(1<<n)){
         dp[s] = {n + 1, 0};
        For(i,0,n){
           
            if(s&(1<<i)){
                auto option = dp[s ^ (1 << i)];
                if(option.second +w[i] <= x){
                    option.second+=w[i];
                }
                else{
                    option.first += 1;
                    option.second = w[i];
                }
                dp[s] = min(dp[s], option);
            }
        }
        // cout << s << endl;
    }
    // for(auto i:dp)
    //     cout << i.first<<" "<<i.second << endl;
    cout << dp[(1<<n)-1].first << endl;
}
int main()
{

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    solve();

    return 0;
}
