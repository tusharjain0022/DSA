## CSES Dynamic Programming

### 1) [Dice Combinations (1633)](https://cses.fi/problemset/task/1633)

Tags - `DP` , `0-1Knapsack`

<details><summary>Hint 1</summary>dp[ i ] = Number of dice combinations to construct sum i.</details>
<details><summary>Hint 2</summary>For each value of i we can have number 1 to min(6,i) on the dice such that we do not exceed required sum.</details>
<details><summary>Hint 3</summary>This problem can also be solved in the similar manner as the Classical Coin Change Problem where coin array={1,2,3,4,5,6} and required sum=n</details>

<details><summary>Solution</summary></details>

C++ Code - [Click here](https://cses.fi/problemset/task/1633) </br>
You can also refer to -

### 2) [Minimizing Coins (1634)](https://cses.fi/problemset/task/1634)

Tags - `DP` , `0-1Knapsack`

<details><summary>Hint 1</summary></details>
<details><summary>Hint 2</summary></details>
<details><summary>Hint 3</summary></details>
<details><summary>Solution</summary></details>

C++ Code - [Click here](https://cses.fi/problemset/task/1633)

### 3) [Coin Combinations I (1635)](https://cses.fi/problemset/task/1635)

Tags - `DP` , `0-1Knapsack`

<details><summary>Hint 1</summary></details>
<details><summary>Hint 2</summary></details>
<details><summary>Hint 3</summary></details>
<details><summary>Solution</summary></details>

C++ Code - [Click here](https://cses.fi/problemset/task/1633)

### 3) [Counting Numbers(2220)](https://cses.fi/problemset/task/2220)

Tags - `DP` , `Digit_DP` , `Permutation_Combination`

<details><summary>Hint 1</summary></br>
<ul>
<li>Let solve(a,b) = No. of integers between a and b where no two adjacent digits are the same, then solve(a,b) = solve(0,b) - solve(0,a-1) </li></ul></details>
<details><summary>Hint 2</summary></br><ul><li>a and b can have atmost 18 digit.</li>
<li>Think of Number of ways of placing digits(0-9) at these 18 places such that number remain less than a or b and no adjacent digits are same. </li></ul></details>
<details><summary>Hint 3</summary></br><ul><li>dp[len][last] = No. of len-digit integers(i.e if len=3 : 3-digit integers) having </li>
<li>Let solve(a,b) = No. of integers between a and b where no two adjacent digits are the same,then solve(a,b)=solve(0,b)-solve(0,a-1) </li></ul></details>
<details><summary>Solution</summary></details>

C++ Code - [Click here](https://cses.fi/problemset/task/1633)
