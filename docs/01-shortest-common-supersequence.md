## Shortest Common Supersequence
code
```cpp
#include <string>

int shortestCommonSupersequence(string s1, string s2, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = i;
    for (int j = 0; j <= m; j++)
        dp[0][j] = j;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        { // if last char is same
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1]; // add 1 to the previous
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]); // add 1 to the min of the previous
        }
    // print dp
    for (auto i = 0; i <= n; i++)
    {
        for (auto j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][m];
}
```
input
```
1
abcd
xycd
```
output
```
0 1 2 3 4 
1 2 3 4 5 
2 3 4 5 6 
3 4 5 5 6 
4 5 6 6 6 
6

-- 0 ms


```
