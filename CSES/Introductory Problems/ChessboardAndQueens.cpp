#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
int mod = 1000000007;
int ans=0;
int board[8][8];

bool check(int x,int y){
    if(board[x][y]=='*')
        return false;
    for (int j = y - 1; j >= 0;j--){
        if(board[x][j]=='Q')
            return false;
    }
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0;i--,j--){
        if(board[i][j]=='Q')
            return false;
    }
    for (int i = x + 1, j = y - 1; i < 8 && j >= 0;i++,j--){
        if(board[i][j]=='Q')
            return false;
    }
    return true;
}

void solve(int j){
    // cout << "hello "<<ans<<" "<<j<<endl;
    if(j==8)
        ans += 1;
    For(i,0,8){
        if(check(i,j)){
            board[i][j] = 'Q';
            solve(j + 1);
            board[i][j] = '.';
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
   For(i,0,8){
       string s;
       cin >> s;
       For(j, 0, 8) board[i][j] = s[j];
   }
   solve(0);
   cout << ans;
   return 0;
}