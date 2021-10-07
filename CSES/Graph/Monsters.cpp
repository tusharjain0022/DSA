#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
int mod = 1000000007;
int dist[1001][1001];
tuple<int, int, char> path[1001][1001];
bool vis[1001][1001];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
char dir[] = {'R', 'D', 'L', 'U'};
int n, m;

bool isBoundary(int x,int y){
    if(x==0 || x==(n-1) || y==0 || y==(m-1))
        return true;
    return false;
}

bool check(int x,int y){
    if(x<n && x>=0 && y<m && y>=0 && !vis[x][y] && dist[x][y]!=-1)
        return true;
    return false;
}

void BFS(vector<pair<int,int>> &monsters){
     queue<pair<int, int>> q;
    for(auto monster:monsters){
        q.push({monster.first, monster.second});
    }
  
   while(!q.empty()){
       int x = q.front().first;
       int y = q.front().second;
       vis[x][y] = true;
       q.pop();
       For(i,0,4){
           int next_x = x + dx[i];
           int next_y = y + dy[i];
           if(check(next_x,next_y)){
               vis[next_x][next_y] = true;
               if(dist[x][y]+1<dist[next_x][next_y]){
               dist[next_x][next_y] = dist[x][y] + 1;
               q.push({next_x, next_y});
               }
           }
       }

   }
}

int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   cin >> n >> m;
   string s;
   vector<pair<int, int>> monsters;
   pair<int, int> start,flag={-1,-1};
   For(i,0,n){
       cin >> s;
       For(j,0,m){
           if(s[j]=='#')
               dist[i][j] = -1;
           else if(s[j]=='.' || s[j]=='M' || s[j]=='A')
               dist[i][j] = INF;
           if(s[j]=='A'){
        
               start = {i, j};
           }
           else if(s[j]=='M'){
               dist[i][j] = 0;
               monsters.push_back({i, j});
           }
       }
   }
   if (isBoundary(start.first, start.second)){
       cout << "YES" << endl;
       cout << 0;
    }
    else{
       BFS(monsters);
  
    memset(vis, false, sizeof(vis));
    queue<pair<int, int>> q;
    dist[start.first][start.second] = 0;
    q.push({start.first, start.second});
    vis[start.first][start.second] = true;


    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        For(i, 0, 4)
        {
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            if (check(next_x, next_y))
            {
                vis[next_x][next_y] = true;
                if ((dist[x][y] + 1) < dist[next_x][next_y])
                {
                    dist[next_x][next_y] = dist[x][y] + 1;
                    path[next_x][next_y] = {x, y, dir[i]};
                    q.push({next_x, next_y});
                    if (isBoundary(next_x, next_y))
                    {
                        flag = {next_x, next_y};
                    }
                }
            }
        }

   }
   if(flag.first!=-1){
       cout << "YES" << endl;
       string ans = "";
       while(flag.first!=start.first || flag.second!=start.second){
           tuple<int, int, char> temp = path[flag.first][flag.second];
           ans += get<2>(temp);
           flag.first = get<0>(temp);
           flag.second = get<1>(temp);
       }
       reverse(ans.begin(), ans.end());
       cout << ans.size()<<endl;
       cout << ans;
   }
   else{
       cout << "NO"<<endl;
   }
    }
   
   return 0;
}