#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
int mod = 1000000007;
int ans[200001];
bool vis[200001];

int solve(int u,vector<vector<int>> &tree){
    vis[u] = true;
    int temp = 0;
    for(auto next:tree[u]){
        if(!vis[next]){
            temp += (solve(next, tree)+1);
        }
    }
    return ans[u] = temp;
}

int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   int n;
   cin >> n;
   vector<vector<int>> tree(n+1);
   For(i, 2, n+1){
       int boss;
       cin >> boss;
       tree[boss].push_back(i);
   }
   cout<<solve(1,tree)<<" ";
   For(i,2,n+1){
       cout << ans[i] << " ";
   }
   return 0;
}