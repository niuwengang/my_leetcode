#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res;
        const int len = nums.size();
        vector<int> L(len), R(len);
        int multi_num = 1;

        L.front() = multi_num;
        for (int i = 1; i < len; i++)
        {
            multi_num *= nums[i - 1];
            L[i] = multi_num;
        }
        multi_num = 1;
        R.back() = multi_num;
        for (int i = len - 2; i >= 0; i--)
        {
            multi_num *= nums[i + 1];
            R[i] = multi_num;
        }

        for (int i = 0; i < len; i++)
        {
            res.push_back(L[i]*R[i]);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> in{1, 2, 3, 4};
    s.productExceptSelf(in);
    return 0;
}