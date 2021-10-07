#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
int mod = 1000000007;
map<int, vector<int>> g;
int ans[100001];

bool dfs(int u, int color){
    ans[u] = color;
    for(auto next:g[u]){
        if(ans[next]==-1){
            if(color==1)
                {
                    if(!dfs(next, 2)) 
                         return false;
                }
            else{
                if(!dfs(next, 1)) 
                      return false;
            }
        }
        else if(ans[next]==color)
            return false;
    }
    return true;
}

int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   memset(ans, -1, sizeof(ans));
   int n, m;
   cin >> n >> m;
   For(i,0,m){
       int u, v;
       cin >> u >> v;
       g[u].push_back(v);
       g[v].push_back(u);
   }
   bool possible = true;
   For(i,1,n+1){
       if(ans[i]==-1)
        possible = (possible && dfs(i, 1));
   }
   if(possible)
    For(i, 1, n + 1) cout << ans[i]<<" ";
   else
       cout << "IMPOSSIBLE";
   return 0;
}