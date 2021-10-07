#include <bits/stdc++.h>

using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int

int dp[1001][(1<<11)];
void generateMask(int cmask,int i,int nmask,int n,vector<int>& nextMask){
   
    if (i == n + 1)
    {
        nextMask.push_back(nmask);
      
        return;
    }
    if((cmask&(1<<i))!=0)
        generateMask(cmask, i+1,nmask, n,nextMask);
    if(i!=n) if((cmask&(1<<i))==0 && (cmask&(1<<(i+1)))==0)
            generateMask(cmask, i+2,nmask, n,nextMask);
    if((cmask&(1<<i))==0)
        generateMask(cmask, i+1,nmask ^ (1 << i), n,nextMask);
}
lli solve(int n,int m,int i,int mask)
{
    if(i==m+1){
        if(mask==0)
            return 1;
        return 0;
    }
    if (dp[i][mask]!=-1)
        return dp[i][mask];
    vector<int> nextMask;
    generateMask(mask, 1,0,n,nextMask);
    // for(int i:nextMask)
    //     cout << i << endl;
    // cout << nextMask.size()<<endl;
    int answer = 0;
    for(int j:nextMask){
        answer = (answer + solve(n, m, i + 1, j)) % 1000000007;
    }
    return dp[i][mask]=answer;
}
int main()
{

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    memset(dp, -1, sizeof(dp));
    int n, m;
    cin >> n >> m;
    cout << solve(n,m,1,0);
    return 0;
}
