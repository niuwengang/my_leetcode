#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        auto cmp = [](const pair<int, int> &a, const pair<int, int> &b) { return a.second > b.second; };//重新定义> greater 小顶堆
        unordered_map<int, int> map;
        for (const auto &it : nums)
        {
            map[it]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
        for (auto it = map.begin(); it != map.end(); it++)
        {
            auto element = *it;
            q.push(pair<int, int>(element.first, element.second));
            if (q.size() > k)
            {
                q.pop();
            }
        }

        vector<int> res;
        while (!q.empty())
        {
            res.push_back(q.top().first);
            q.pop();
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v={1, 1, 1, 2, 2, 3};
    s.topKFrequent(v, 2);
}