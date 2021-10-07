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
   int n;cin>>n;
   vector<int> s(n);
   For(i,0,n){
       cin >> s[i];
   }
   vector<int> k;
   int sum = s[n-1],mn=s[n-1],mx=0;
// This loop checks for all maximum possible averages
// and stores it in `mx` acc. to given selection criteria
   for (int i = n - 2; i >= 0;i--){
       if(s[i]<mn)
           mn = s[i];
       sum += s[i];
       float avg = (sum - mn) / (n - i - 1);
       if(avg>mx){
           mx = avg;
       }
   }
   sum = s[n - 1];
   mn = s[n - 1];
// This loop checks for the possible value of k which
//  produces an average equal to `mx` acc. to given selection criteria
   for (int i = n - 2; i >= 0;i--){
       if(s[i]<mn)
           mn = s[i];
       sum += s[i];
       float avg = (sum - mn) / (n - i - 1);
       if(avg==mx){
           k.push_back(i);
       }
   }
 if(n==1){
     cout << 0<<endl;
 }
 else{
   sort(k.begin(), k.end());
   for(auto i:k){
       if(i!=0)
      cout << i << " ";
   }
 }
       

   return 0;
}