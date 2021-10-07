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

void combination(string s,string tempAns){
    if(tempAns.size()==s.size())
        cout << tempAns << endl;
    else{
        for (int i = 0; i < s.size();i++){
            if(subset&(1<<i))
                continue;
            // Flip on the i'th bit => i'th character is included
            subset ^= (1 << i);
            combination(s, tempAns + s[i]);
            //Flip off the i'th bit
            subset ^= (1 << i);
        }
    }
}
 
int main()
{ 
   fastIO;
   string s;
   cin >> s;
   combination(s, "");
   return 0;
}