#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if(nums.size()<3)return{}; 
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int first = 0; first < nums.size(); first++)
        {
            int target = -nums[first];
            int third = nums.size() - 1;
            int second = first + 1;
            while (second < third)
            {
                int sum = nums[second] + nums[third];
                if (sum > target)
                {
                    third--;
                }
                else if (sum < target)
                {
                    second++;
                }
                else
                {
                    res.insert({nums[first], nums[second], nums[third]});
                    second++;
                    third--;
                }
            }
        }
        vector<vector<int>> res_vec;
         res_vec.assign(res.begin(),res.end());
        return res_vec;
    }
};

int main()
{
    vector<int> demo{-2, 0, 1, 1, 2};
    Solution s;
    s.threeSum(demo);
    return 0;
}