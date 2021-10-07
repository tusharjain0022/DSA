#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
void solve()
{
    int n, x, found = 0;
    cin >> n >> x;
    vector<pair<int, int>> a;
    vector<int> b;
    For(i, 0, n)
    {
        pair<int, int> f;
        int xx;
        cin >> xx;
        f.first = xx;
        f.second = i + 1;
        a.push_back(f);
        b.push_back(xx);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    For(i, 0, n)
    {
        int diff = x - b[i];
        // cout << diff << "#" << b[i] << i << endl;
        if (binary_search(b.begin() + i + 1, b.end(), diff))
        {
            // cout << "hello";
            For(j, i + 1, n)
            {
                // cout << i;
                if (a[i].first + a[j].first == x)
                {
                    cout << a[i].second << " " << a[j].second;
                    break;
                }
            }
            found = 1;
            break;
        }
    }
    // cout << found;
    if (!found)
        cout << "IMPOSSIBLE";
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
