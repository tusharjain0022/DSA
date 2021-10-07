#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
int mod = 1000000007;
int n, m;
pair<int, int> start,stop;
tuple<int,int,char> path[1001][1001];
bool vis[1001][1001];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
char dir[] = {'R', 'D', 'L', 'U'};

bool check(int x,int y){
    if(x<n && x>=0 && y<m && y>=0 && !vis[x][y])
        return true;
    return false;
}

bool bfs(int sx,int sy){
    queue<pair<int, int>> q;
    q.push({sx,sy});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(vis[x][y])
            continue;
        vis[x][y] = true;
        if(x==stop.first && y==stop.second)
            return true;
        For(i,0,4){
            int next_x = x + dx[i], next_y = y + dy[i];
            if(check(next_x,next_y)){
                q.push({next_x, next_y});
                path[next_x][next_y] = {x, y, dir[i]};
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
   string s;
   cin >> n >> m;
   For(i,0,n){
       cin >> s;
       For(j,0,m){
           if(s[j]=='.' || s[j]=='A' || s[j]=='B')
               vis[i][j] = false;
           else
               vis[i][j] = true;
           if(s[j]=='A')
               start = make_pair(i, j);
           if(s[j]=='B')
               stop = make_pair(i, j);
       }
   }
   if(bfs(start.first,start.second)){
       cout << "YES" << endl;
       int x = stop.first, y = stop.second,count=0;
       string ans = "";
       while(x!=start.first || y!=start.second){
           count += 1;
           tuple<int, int, char> temp = path[x][y];
           ans += get<2>(temp);
           x = get<0>(temp);
           y = get<1>(temp);
             }
       cout << count << endl;
       reverse(ans.begin(), ans.end());
       cout << ans;
   }
   else
       cout << "NO";
   return 0;
}