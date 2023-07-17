#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int climbStairs(int n)
    {
        vector<int> dp(n + 1);
        if(n<3)
        {
            return n;
        }
        dp[0] = 0; // 1种
        dp[1] = 1; // 1种
        dp[2] = 2; // 2种
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

int main()
{
}