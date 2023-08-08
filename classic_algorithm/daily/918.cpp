#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        const int len = nums.size();
        vector<int> dp_positive(len), dp_negative(len);
        dp_positive[0] = nums.front();
        dp_negative[0] = nums.front();
        int max_positvie = nums.front(), min_negative = nums.front();

        const int sum=accumulate(nums.begin(),nums.end(),0);
        for (int index = 1; index < len; index++)
        {
            dp_positive[index]=max(dp_positive[index-1]+nums[index],nums[index]);
            dp_negative[index] = min(dp_negative[index - 1] + nums[index], nums[index]);
            max_positvie = max(max_positvie, dp_positive[index] );
            min_negative = min(min_negative, dp_negative[index]);
    }
    if (min_negative == sum)
    {
            return max_positvie + 0;
            //  最小子数组即为完整数组时，最大首尾数组没有元素
    }
    return max (max_positvie,sum-min_negative);
    }
};

int main()
{
    return 0;
}