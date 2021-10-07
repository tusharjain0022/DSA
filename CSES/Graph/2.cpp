#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
int mod = 1000000007;
lli dp[2001][2001];
char g[2001][2001];
int dx[] = {0, 1, 1};
int dy[] = {1, 0, 1};
int n, m;

bool check(int x, int y){
    if(x<n && x>=0 && y<m && y>=0 && g[x][y]!='#')
        return true;
    return false;
}

lli DFS(int x ,int y){
    // cout << x << " " << y << endl;
    if(dp[x][y]!=-1)
        return dp[x][y];
    lli ans = 0;
    For(i,1,n){
        int next_x = x +i;
        int next_y = y;
        if(check(next_x,next_y)){
            if(dp[next_x][next_y]!=-1)
                ans =(ans+ dp[next_x][next_y])%mod;
            else
                ans = (ans+DFS(next_x, next_y))%mod;
           
        }
        else{
            break;
        }
    }
    For(i,1,m){
        int next_x = x;
        int next_y = y+i;
        if(check(next_x,next_y)){
            if(dp[next_x][next_y]!=-1)
                ans = (ans+dp[next_x][next_y])%mod;
            else
                ans = ans = (ans+DFS(next_x, next_y))%mod;
           
        }
        else{
            break;
        }
    }
    For(i,1,min(n,m)){
        int next_x = x +i;
        int next_y = y+i;
        if(check(next_x,next_y)){
            if(dp[next_x][next_y]!=-1)
                ans =(ans+ dp[next_x][next_y])%mod;
            else
                ans = (ans+DFS(next_x, next_y))%mod;
           
        }
        else{
            break;
        }
    }
    return dp[x][y] = ans%mod;
}

int main()
{ 

   fastIO;
   memset(dp, -1, sizeof(dp));
   cin >> n >> m;
   For(i,0,n){
       string s;
       cin >> s;
For(j,0,m)
       g[i][j]=s[j];
   }
   dp[n - 1][m - 1] = 1;


   cout << DFS(0,0)%mod<<endl;
   
   return 0;
}