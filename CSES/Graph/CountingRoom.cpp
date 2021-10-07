#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
typedef long long int lli;
#define INF 0x3f3f3f3f
int mod = 1000000007;
int n, m;
bool vis[1001][1001];

void DFS(int x, int y)
{
    vis[x][y] = 1;
    // cout << "h" << endl;
    if ((x + 1) < n && !vis[x + 1][y])
        DFS( x + 1, y);
    if ((x - 1) >= 0 && !vis[x - 1][y])
        DFS( x - 1, y);
    if ((y + 1) < m && !vis[x][y + 1])
        DFS( x, y + 1);
    if ((y - 1) >= 0 && !vis[x][y - 1])
        DFS( x, y - 1);
}

int main()
{
    fastIO;

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
    int ans = 0;
    string s;
    cin >> n >> m;
    For(i, 0, n)
    {
        cin >> s;
        For(j,0,m){
            if(s[j]=='.')
                vis[i][j] = false;
            else
                vis[i][j] = true;
        }
    }
    For(i, 0, n)
    {
        For(j, 0, m)
        {
            if (!vis[i][j])
            {
                DFS(i, j);
                ans += 1;
            }
        }
    }
    cout << ans;
    return 0;
}