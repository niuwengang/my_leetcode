#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if ((sum - nums.front()) == 0)
            return 0;
        int left = 0;
        int right = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            left += nums[i - 1];
            right = sum - nums[i] - left;
            if (left == right)
                return i;
        }
        return -1;
    }
};

int main()
{
    return 0;
}