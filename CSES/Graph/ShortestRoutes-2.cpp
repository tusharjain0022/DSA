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
   int n, m, q;
   cin >> n >> m >> q;
   long long graph[501][501];
   For(i,0,n){
       For(j,0,n){
           if(i==j)
               graph[i][j] = 0;
            else
                graph[i][j] = LINF;
       }
   }
   For(i,0,m){
       int u, v;
       long long c;
       cin >> u >> v >> c;
       u -= 1;
       v -= 1;
       graph[u][v] = min(graph[u][v],c);
       graph[v][u] = min(graph[u][v],c);
   }
   For(k,0,n){
       For(i,0,n){
           For(j,0,n){
               if(graph[i][k] + graph[k][j] < graph[i][j])
                   graph[i][j] = graph[i][k] + graph[k][j];
           }
       }
   }
   For(i,0,q){
       int u, v;
       cin >> u >> v;
       u -= 1;
       v -= 1;
       if(graph[u][v]!=LINF)
           cout << graph[u][v]<<endl;
       else
           cout << -1 << endl;
   }
//    For(i,0,n){
//        For(j,0,n){
//            cout << graph[i][j] << " ";
//        }
//        cout << endl;
//    }
   return 0;
}