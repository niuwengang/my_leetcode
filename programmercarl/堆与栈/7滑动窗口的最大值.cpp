#include <bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) { return a.first < b.first; };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            q.push(pair<int,int>(nums[i], i));
        }
        res.push_back(q.top().first);
        for (int j = k; j < nums.size(); j++)
        {
            q.push(pair<int, int>(nums[j], j));
            /*去掉旧的且影响结果的*/
            while (q.top().second <= j - k)
            {
                q.pop();
            }
            res.push_back(q.top().first);
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