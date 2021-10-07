#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n), t(m),flag(n);
    For(i, 0, n){
            cin >>h[i];
            flag[i] = 0;
    }
    For(i, 0, m)
            cin >>t[i];
    sort(h.begin(), h.end());
    For(i,0,m){
        auto u = upper_bound(h.begin(), h.end(), t[i]) - h.begin()-1;
        if(u<0)
            cout << "-1 ";
        else{
            if(u-flag[u]>=0){
                cout << h[u - flag[u]]<<" ";
                flag[u] += 1;
                flag[u-flag[u]]
            }
            else
                cout << "-1 ";
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
