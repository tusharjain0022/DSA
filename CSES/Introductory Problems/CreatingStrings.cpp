// Author : Tushar Jain 
// Dated : 21/07/2021
// Program to produce all possible combinations of the string
// Based on Backtracking Method
// Time Complexity : O(n.n!)
#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// if i'th bit is set ib subset,it means i'th character
// is already inluded in the tempAns.
int subset = 0;
vector<string> ans;
map<char,int> freq;

void combination(int n,string tempAns){
    if(tempAns.size()==n)
        ans.push_back(tempAns);
    else{
        for(auto next:freq){
            if(next.second==0)
                continue;
            freq[next.first] -= 1;
            combination(n, tempAns + next.first);
            freq[next.first] += 1;
        }
    }
}
 
int main()
{ 
   fastIO;
   string s;
   cin >> s;
   for(auto ch:s)
       freq[ch] += 1;
   combination(s.size(), "");
   cout << ans.size() << endl;
   for (auto s:ans){
       cout << s << endl;
   }
       return 0;
}