#include <bits/stdc++.h>
using namespace std;

class Solution
{

  public:
    int integerBreak(int n)
    {
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        if (n <= 3)
        {
            return dp[n];
        }
        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                dp[i] = max(dp[i], max(i * (i - j), i * dp[i - j]));
            }
        }
        return dp[n];
    }
};
int main()
{
}