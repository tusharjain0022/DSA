#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
int mod = 1000000007;
map<int, vector<int>> g;
bool vis[200001];

void dfs(int x){
    vis[x] = true;
    for(auto next:g[x]){
        if(!vis[next])
            dfs(next);
    }
}

int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;

   int n, m,count=-1;
   vector<pair<int, int>> ans;
   cin >> n >> m;
   For(i,0,m){
       int u, v;
       cin >> u >> v;
       g[u].push_back(v);
       g[v].push_back(u);
   }
   For(i,1,n+1){
       if(!vis[i]){
       dfs(i);
       count += 1;
       if(count>0)
           ans.push_back({1, i});
       }
   }
   cout << count << endl;
   for(auto i:ans){
       cout << i.first << " " << i.second << endl;
   }
   return 0;
}