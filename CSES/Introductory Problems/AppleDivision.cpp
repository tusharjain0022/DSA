#include <bits/stdc++.h>
using namespace std;
 
#define For(x, y, z) for (int x = y; x < z; x++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int lli;
# define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
int mod = 1000000007;
lli diff(lli x,lli y){
    if(x>=y)
        return (x - y);
    return (y - x);
}



int main()
{ 
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
#endif
   fastIO;
   lli n;
   cin >> n;
   lli bit = 1 << n,apple[n],ans = 0,sum=0;
   For(i,0,n){
       cin >> apple[i];
       ans += apple[i];
   }
   sum = ans;
   For(i,0,pow(2,n)){
       lli tempAns = 0;
       For(j,0,n){
           if((1<<j) & i)
               tempAns += apple[j];
       }
       ans = min(ans, diff(tempAns, sum - tempAns));
   }
   cout << ans;
   return 0;
}