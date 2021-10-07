#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
void solve()
{
    lli a, b;
    cin >> a >> b;
    lli y = 2 * a - b;
    if (y % 3 == 0 and y >= 0)
    {
        y = y / 3;
        if (2 * y <= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
