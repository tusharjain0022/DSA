#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
int mod = 1000000007;
bool vis[100001];
int path[100001];
map<int, vector<int>> g;
 
 
pair<int,int> dfs(int u,int parent){
    vis[u] = true;
    path[u] = parent;
    for(auto next:g[u]){
        if(vis[next]){
            if(next!=parent)
                return {u, next};
        }
        else{
            pair<int,int> tempAns = dfs(next, u);
            if(tempAns.first!=-1)
                return tempAns;
        }
    }
    return {-1, -1};
}
 
int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   int n, m,u,v;
   vector<int> r;
   set<int> nodes;
   cin >> n >> m;
   For(i,0,m){
       cin >> u >> v;
       nodes.insert(u);
       nodes.insert(v);
       g[u].push_back(v);
       g[v].push_back(u);
   }
   bool flag = false;
   for(auto node:nodes){
   if(!vis[node]){
   pair<int,int> ans = dfs(node, -1);
   if(ans.first!=-1){
 
       int x = ans.first;
       flag = true;
       r.push_back(ans.second);
       while(x!=ans.second){
           r.push_back(x);
           x = path[x];
       }
       r.push_back(ans.second);
       reverse(r.begin(), r.end());
       cout << r.size() << endl;
       for(auto i:r){
           cout << i << " ";
       }
       break;
   }
   }}
  
   if(!flag)
       cout << "IMPOSSIBLE";
   return 0;
}