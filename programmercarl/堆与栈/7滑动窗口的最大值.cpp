#include <bits/stdc++.h>
using namespace std;

// 单调队列
class Solution
{
  public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> res;
        deque<int> q;
        for (int i = 0; i < k; i++)
        {
            while (!q.empty() && nums[i] > q.front())
            {
                q.pop_back();
            }
            q.push_back(nums[i]);
        }
        res.push_back(q.front());
        for(int j=k;j<nums.size();j++)
        {
            while (!q.empty() && nums[j] > q.back())
            {
                q.pop_front();
            }
            q.push_back(nums[j]);
            res.push_back(q.front());
        }
        return res;
    }
};

int main()
{
    vector<int> in{1, 3, -1, -3, 5, 3, 6, 7};
    Solution s;
    s.maxSlidingWindow(in, 3);
    return 0;
}