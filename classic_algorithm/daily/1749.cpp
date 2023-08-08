#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        const int len = nums.size();
        vector<array<int, 2>> dp(len);
        dp[0][1] = dp[0][0] = nums.front();
        int res = abs(nums.front());
        for (int i = 1; i < len; i++)
        {
            dp[i][0] = max(dp[i - 1][0] + nums[i], nums[i]);
            dp[i][1] = min(dp[i - 1][1] + nums[i], nums[i]);
            res = max({abs(dp[i][0]),res, abs(dp[i][1])});
        }
        return res;
    }
};
int main()
{
    return 0;
}