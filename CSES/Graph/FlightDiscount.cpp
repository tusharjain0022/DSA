#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
int mod = 1000000007;
pair<int,int> dp[100001];
map<int, vector<pair<int, int>>> g;

pair<int,int> DFS(int u,int upMaxDist,int upTotalDist){
    int maxDist = upMaxDist, totalDist = upTotalDist;
    for(auto next:g[u]){
        pair<int, int> temp = dp[next.first].first == -1 ? DFS(next.first, max(upMaxDist, next.second), upTotalDist + next.second) : dp[next.first];
    }
    return dp[u] = {maxDist, totalDist};
}
 
int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   int n, m;
   cin >> n >> m;
   For(i,0,m){
       int u, v;
       long long c;
       cin >> u >> v >> c;
       g[u].push_back({v, c});
   }
   For(i,1,n+1){
       dp[i] = {-1, -1};
   }
   pair<int, int> ans = DFS(0, INF, 0);
   cout << ans.second - ans.first + ans.first / 2;
   return 0;
}