#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int temp_sum_closest = nums[0] + nums[1] + nums[2];

        for (int index = 0; index < nums.size(); index++)
        {
            /*去重*/
            if (index > 0 && nums[index] == nums[index - 1])
            {
                continue;
            }
            int left = index + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[index] + nums[left] + nums[right];

                int residual = sum - target;
                if (abs(residual) < abs(temp_sum_closest - target))
                {
                    temp_sum_closest = sum;
                }
                if (residual > 0)
                {
                    right--;
                }
                else if (residual < 0)
                {
                    left++;
                }
                else
                {
                    return sum;
                }

            }
        }
        return temp_sum_closest;
    }
};

int main()
{
    vector<int> in{1, 1, 1, 0};
    Solution s;
    s.threeSumClosest(in, 100);

    return 0;
}