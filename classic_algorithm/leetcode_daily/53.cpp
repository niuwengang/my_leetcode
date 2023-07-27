#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maxSubArray(vector<int> &nums)
    {
        const int len = nums.size();
        vector<int> dp(len);
        dp[0] = nums.front();
        int max_one=dp[0];
        for (int index = 1; index < len; index++)
        {
            dp[index] = max(dp[index - 1] + nums[index], nums[index]);
            max_one=max(dp[index],max_one);
        }
        return max_one;
    }
};

int main()
{
    return 0;
}