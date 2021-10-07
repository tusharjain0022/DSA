#include <bits/stdc++.h>
 
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
#define mod 1000000007
lli dp[200001];

lli solve(vector<int> a,vector<int> b,vector<int> p,int i)
{
   
   if(i<0)
       return 0;
    if(i==0)
       return dp[i]=p[i];
    if(dp[i]!=-1)
        return dp[i];
   auto l = lower_bound(b.begin(), b.end(), a[i])-b.begin()-1;
   cout << "# " << i<<" "<<a[i] << " " << l<<endl;
   return dp[i]=max(p[i] + solve(a, b, p, l), solve(a, b, p, i - 1));
}
//p: 4 6 3 2
//a: 2 3 5 6
//b: 4 6 7 8

int main()
{
     fast_io;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<int> a(n), b(n), p(n);
    vector<tuple<int, int,int>> temp(n);
    For(i,0,n){
        cin >> a[i] >> b[i] >> p[i];
        temp[i]=(make_tuple(b[i], a[i],p[i]));
    }
    sort(temp.begin(),temp.end());
    For(i,0,n){
        b[i] = get<0>(temp[i]);
        a[i] = get<1>(temp[i]);
        p[i] = get<2>(temp[i]);
    }
    // for(auto i:p)
    //     cout << i << ' ';
    // cout << endl;
    // for (auto i : b)
    //     cout << i << ' ';
    // cout << endl;
    // for(auto i:a)
    //     cout << i << ' ';
    // cout << endl;
    For(i,0,n+1){
        if(i==0)
            dp[i] = 0;
        else{
            auto l = lower_bound(b.begin(), b.end(), a[i-1])-b.begin();
            // cout << i << " " << a[i-1] << " " << l << endl;
            dp[i]=max(p[i-1] + dp[l], dp[i - 1]);
        }
    }
    cout<<dp[n];

    return 0;
}