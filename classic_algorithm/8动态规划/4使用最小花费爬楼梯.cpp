#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int len = cost.size();
        vector<int> dp(len + 1); // 到达dpi位置的最小花费
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i < len + 1; i++)
        {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[len];
    }
};

int main()
{
    Solution s;
    vector<int> in{10,15,20};
    s.minCostClimbingStairs(in);
}
