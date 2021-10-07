#include <bits/stdc++.h>
 
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007



int main()
{
     fast_io;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
   
    int n;
    cin >> n;
    vector<int> x(n),dp;
    For(i, 0, n) cin >> x[i];
    For(i,0,n){
        auto u = lower_bound(dp.begin(), dp.end(), x[i]) - dp.begin();
        // cout << i << " " << x[i] << " " << u << endl;
        if(u==dp.size())
            dp.push_back(x[i]);
        else dp[u] = x[i];
    }
    // for(auto i:dp){
    //     cout <<i << " ";
    //     if(i!=0)
    //         ans += 1;
     
    // }
    cout << dp.size();


    return 0;
}