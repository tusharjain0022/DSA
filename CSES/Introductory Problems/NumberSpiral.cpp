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
   lli t;
   cin >> t;
   while(t--){
       lli y, x;
       cin >> y >> x;
       lli temp = max(y, x) - 1;
       lli num = temp*temp;
    //    cout << "#" << num << endl;
       if(y<=x){
           if(x%2==0)
               num += y;
           else
               num += (x+x-y);
       }
       else{
           if(y%2==0)
               num += (y+y-x);
        else
            num += x;
       }
       cout << num << endl;
   }

   return 0;
}