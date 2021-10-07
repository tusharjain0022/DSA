#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
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
   array <long long,2501> dist;
   dist.fill(LINF);
   vector<tuple<int,int,long long>> g;
   For(i,0,m){
       int u, v;
       long long c;
       cin >> u >> v >> c;
       g.push_back({u,v,-1*c});
   }
   dist[1] = 0;
   For(i,0,n){
       for(auto edge:g){
           if(dist[get<0>(edge)]+get<2>(edge) < dist[get<1>(edge)] && dist[get<0>(edge)]!=LINF)
               dist[get<1>(edge)] = dist[get<0>(edge)] + get<2>(edge);
       }
   }
     
   For(i,0,n){
       for(auto edge:g){
           if(dist[get<0>(edge)]+get<2>(edge) < dist[get<1>(edge)] && dist[get<0>(edge)]!=LINF){
               dist[get<1>(edge)] = -LINF;
           }
       }
   }
  
   if(dist[n]==-1*LINF)
       cout << -1;
   else
       cout << -1*dist[n] << endl;
   return 0;
}