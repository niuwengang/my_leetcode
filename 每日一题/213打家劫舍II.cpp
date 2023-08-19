#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int rob(vector<int> &nums)
    {
        if(nums.size()<=2)
        {
            return *max_element(nums.begin(),nums.end());
        }
        const int len = nums.size();
        vector<int> dpA(len), dpB(len);
        dpA[0] = nums[0]; // 不考虑尾
        dpA[1]=max(nums[0],nums[1]);
        dpB[1] = nums[1]; // 不考虑头
        dpB[2] = max(nums[1], nums[2]);
        for (int i = 2; i < len - 1; i++)
        {
            dpA[i] = max(dpA[i - 2] + nums[i], dpA[i-1]);
        }
        for (int i = 3; i < len; i++)
        {
            dpB[i] = max(dpB[i - 2] + nums[i], dpB[i-1]);
        }
        return max(dpA[len-2],dpB[len-1]);
    }
};

int main()
{
    return 0;
}