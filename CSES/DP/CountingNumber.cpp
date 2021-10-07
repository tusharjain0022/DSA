#include <bits/stdc++.h>
using namespace std;

#define For(x, y, z) for (int x = y; x < z; x++)
#define lli long long int

// [number of digit (0-18)][lastNumer (0-9)][leadingZero (0-1)][Constraint (0-1)]
lli dp[19][10][2][2];

lli solve(string s,int len, int last,int leadingZero,int constraint){

    if(len==0)
        return 1;

    if(last!=-1 && dp[len][last][leadingZero][constraint]!=-1)
        return dp[len][last][leadingZero][constraint];

    int ub = constraint ? (s[s.length()-len]-'0') : 9;
    int lb = 0;
    lli answer = 0;

    For(i,lb,ub+1)
        if(i!= last or (leadingZero && i==0))
        answer += solve(s,  len - 1, i, leadingZero && i == 0, constraint && i == ub);
    
    return dp[len][last][leadingZero][constraint]=answer;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    lli a1, b1;
    cin >> a1 >>b1;
    string a = to_string(a1 - 1);
    string b = to_string(b1);
    lli answer1 = solve(a, a.length(), -1, 1, 1);
    memset(dp, -1, sizeof(dp));
    lli answer2 = solve(b,  b.length(), -1, 1, 1);
    cout << answer2-answer1 << endl;
    return 0;
}
