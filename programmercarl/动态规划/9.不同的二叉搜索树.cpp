#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int numTrees(int n)
    {
        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        for (int num = 2; num <= n; num++)
        {
            for (int j = 1; j <= num; j++)
            {
                dp[num] += dp[j - 1] * dp[num - j];
            }
        }
        return dp[n];
    }
};

int main()
{
    return 0;
}