#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f

int mod = 1000000007;
 
int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   int n, m;
   cin >> n >> m;
   map<int, vector<pair<int, int>>> g;
   For(i,0,m){
       int u, v, c;
       cin >> u >> v >> c;
       g[u].push_back({v, c});
       
   }
   array<lli,100001> dist;
   dist.fill(1e18);
   bool vis[n + 1] = {false};
   priority_queue<pair<lli, int>, vector<pair<lli,int>>, greater<pair<lli, int>>> q;
   q.push({0, 1});
   dist[1] = 0;
   while(!q.empty()){
       lli c = q.top().first;
       int u = q.top().second;
       q.pop();
       vis[u] = true;
       if(dist[u]<c)
           continue;
       for(auto next:g[u]){
           lli newDist = dist[u] + next.second;
           if(newDist < dist[next.first] && !vis[next.first]){
               dist[next.first] = newDist;
               q.push({newDist, next.first});
           }
       }
   }
   For(i,1,n+1){
       cout << dist[i] << " ";
   }
   return 0;
}