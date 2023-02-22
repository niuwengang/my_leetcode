#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        // 二分
        const int len = nums.size();
        if(len==1&&nums[0]==target)return  vector<int>{0, 0};
        int i = 0, j = nums.size() - 1;
        vector<int> res;
        while (i <=j)
        {
            int mid = (i + j) >> 1;
            if (target >nums[mid])
            {
                i = mid+1;
            }
            else if (target < nums[mid])
            {
                j = mid-1;
            }
            else // target==nums[mid]
            {

                int left = mid;
                while (left >= 0 && nums[left] == target)
                    left--;
                res.push_back(left + 1);

                int right = mid;
                while (right < len && nums[right] == target)
                    right++;
                res.push_back(right - 1);
                return res;
            }
        }
        return vector<int>{-1, -1};
    }
};

int main()
{
    vector<int> num{2,2};
    Solution s;
    s.searchRange(num, 2);
    return 0;
}