#include <bits/stdc++.h>
using namespace std;

// 1.两次扫描
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        const int len = nums.size();
        if (len == 1 || 0)
            return;
        for (int i = len - 1; i >= 1; i--)
        {
            if (nums[i - 1] < nums[i]) // 找降序点
            {
                for (int j = len - 1;; j--)
                {
                    if (nums[j] > nums[i - 1])
                    {
                        swap(nums[j], nums[i - 1]);
                        reverse(nums.begin() + i, nums.end()); // 注意reverse [)
                        return;
                    }
                }
            }
        }
        reverse(nums.begin(), nums.end());
        return;
    }
};

int main()
{
    vector<int> in{3, 2, 1};
    shared_ptr<Solution> p = make_shared<Solution>();
    p->nextPermutation(in);

    return 0;
}