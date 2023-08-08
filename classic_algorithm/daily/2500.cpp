#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {

        int res = 0;

        while (grid[0].size()>0)
        {
            priority_queue<int, vector<int>, less<int>> big_heap;
            for (auto &it : grid)
            {
                auto point = max_element(it.begin(), it.end());
                big_heap.push(*point);
                it.erase(point);
            }
            res += big_heap.top();
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> in{{1, 2, 4}, {3, 3, 1}};
    s.deleteGreatestValue(in);
    return 0;
}