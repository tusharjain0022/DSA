#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
int mod = 1000000007;
int n, m;
map<int, vector<int>> g;
int path[100001];
bool vis[100001];

bool bfs(){
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x==n)
            return true;
        for(auto next:g[x]){
            if(!vis[next]){
                vis[next] = true;
                q.push(next);
                path[next] = x;
            }
            
        }
    }
    return false;
}
 
int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   cin >> n >> m;
   For(i,0,m){
       int u, v;
       cin >> u >> v;
       g[u].push_back(v);
       g[v].push_back(u);
   }
   vector<int> ans;
   if(bfs()){
       int x = n,count=0;
       while(x!=1){
           count += 1;
           ans.push_back(path[x]);
           x = path[x];
        }
       cout << count+1 << endl;
       reverse(ans.begin(), ans.end());
       for(auto i:ans)
           cout << i << " ";
       cout << n;
   }
  
   else
       cout << "IMPOSSIBLE";
   return 0;
}