#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
int mod = 1000000007;
int mx = 0;
map<int, vector<int>> tree;
bool vis[200001];

int solve(int u){
    // cout << u <<" " <<mx<<endl;
    vector<int> temp;
    vis[u] = true;
    if((tree[u].size()==1 && u!=1) || tree[u].size()==0)
        return (1);
    for(auto next:tree[u]){
        if(!vis[next]){
            temp.push_back(solve(next));
        }
    }
    int ans = 0;
    if(temp.size()==1){
        ans = temp[0] + 1;
    }
    else{
        sort(temp.begin(), temp.end());
        ans = temp[temp.size() - 1] + 1;
        mx = max(mx, 1 + temp[temp.size() - 1] + temp[temp.size() - 2]);
    }
    // cout << "#" << u << " " << ans << " " << mx << endl;
    return ans;
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
   For(i,0,n-1){
       int u, v;
       cin >> u >> v;
       tree[u].push_back(v);
       tree[v].push_back(u);
   }
   mx = max(mx, solve(1));
   cout << mx-1;
   return 0;
}