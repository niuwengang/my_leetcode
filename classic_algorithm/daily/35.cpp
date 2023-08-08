#include "bits/stdc++.h"
using namespace std;


/*
时间复杂度o(log(n))
空间复杂度o(1)
*/

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        const int len = nums.size();
        int left = 0, right = len - 1;
        while (left <= right)
        {
            int mid = (left + right) >> 1;
            if (nums[mid] > target)
            {
                right--;
            }
            else if (nums[mid] < target)
            {
                left++;
            }
            else // 找到目标值
            {
                return mid;
            }
        }
        // 未找到目标值
        return right + 1;
    }
};

int main()
{
    vector<int> in{1, 3, 5, 6};
    Solution s;
    s.searchInsert(in, 0);

    return 0;
}