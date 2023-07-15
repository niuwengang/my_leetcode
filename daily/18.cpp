

#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> res_set;
        const int len = nums.size();
        for (int l1 = 0; l1 < len; l1++)
        {

            for (int l2 = l1 + 1; l2 < len; l2++)
            {
                int left = l2 + 1;
                int right = len - 1;
                 long long target_new = static_cast< long long>(target) - nums[l1] -nums[l2];

                while (left < right)
                {
                    long  long  sum = nums[left] + nums[right];
                    if (sum < target_new)
                    {
                        left++;
                    }
                    else if (sum > target_new)
                    {
                        right--;
                    }
                    else // sum==target_new
                    {
                        vector<int> temp_vec = {nums[l1], nums[l2], nums[left], nums[right]};
                        res_set.insert(temp_vec);
                        left++;
                        right--;
                    }
                }
            }
        }
        vector<vector<int>> res_vec;
        for (const auto &it : res_set)
        {
            res_vec.push_back(it);
        }
        return res_vec;
    }
};

int main()
{
    vector<int> in = {1, -2, -5, -4, -3, 3, 3, 5};
    Solution s;
    s.fourSum(in,0);
    return 0;
}