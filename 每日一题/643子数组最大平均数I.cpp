#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int init_value = accumulate(nums.begin(), nums.begin() + k, 0); // ! 不包括nums.begin() + k
        int max_one = init_value;
        for (int i = k; i < nums.size(); i++)
        {
            init_value += nums[i] - nums[i - k];
            max_one = max(max_one, init_value);
        }
        return (double)max_one / (double)k;
    }
};

int main()
{
    Solution s;
    vector<int> vec{1, 12, -5, -6, 50, 3};
    int k = 4;
    s.findMaxAverage(vec, k);

    return 0;
}