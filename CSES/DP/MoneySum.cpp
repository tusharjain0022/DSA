#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int
int dp[101][100001];

void solve()
{
    int n,count=0;
    memset(dp, 0, sizeof(dp));
    cin >> n;
    int arr[n];
    For(i, 0, n) cin >> arr[i];
    sort(arr, arr + n);
    // cout << "hello";
    For(i,0,n)
    For(j,0,100001){
        if(j==0){
            dp[i][j] = 1;
            dp[i][j + arr[i]] = 1;
        }
        else if(i==0) 
             {if(j==arr[i])
                dp[i][j] = 1;}
        else{
            if(dp[i-1][j]==1){
                dp[i][j] = 1;
                if((j+arr[i])<100001)
                    dp[i][j + arr[i]] = 1;
            }
        }
    }
    // cout << "hello"<<endl;
    // For(i, 0, n) {For(j, 0, 14) cout << dp[i][j] << " ";
    //     cout << endl;
    // }

    For(i, 0, 100001) if (dp[n - 1][i] == 1) count++;
    cout << count-1<<endl;
    For(i, 1, 100001) if (dp[n - 1][i] == 1) cout << i << " ";
    cout << endl;
}
int main()
{

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int t=1 ;
    

    while (t--)
    {
        solve();
    }
    return 0;
}
