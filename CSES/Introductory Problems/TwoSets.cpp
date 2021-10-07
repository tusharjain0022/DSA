#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    lli s1 = 0, s2 = 0;
    for (int i = n; i > 0; i--)
    {
        if (s1 <= s2)
        {
            a.push_back(i);
            s1 += i;
        }
        else
        {
            b.push_back(i);
            s2 += i;
        }
    }
    // cout << s1 << " " << s2;
    if (s1 == s2)
    {
        cout << "YES" << endl;
        cout << a.size() << endl;
        For(i, 0, a.size()) cout << a[i] << " ";
        cout << endl;
        cout << b.size() << endl;
        For(i, 0, b.size()) cout << b[i] << " ";
    }
    else
    {
        cout << "NO" << endl;
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
