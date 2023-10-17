#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int longestSubarray(vector<int> &nums)
    {
        int left_point = 0;
        int right_point = 0;
        int zeroCnt = 0;
        const int len = nums.size();
        while (right_point < len)
        {
            if (nums[right_point] == 0)
            {
                ++zeroCnt;
            }
            right_point++;
            if (zeroCnt > 1)
            {
                if (nums[left_point] == 0)
                {
                    --zeroCnt;
                }
                left_point++;
            }
        }
        return (right_point - left_point + 1);
    }
};

int main()
{
    return 0;
}