#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int connectSticks(vector<int> &sticks)
    {
        priority_queue<int, vector<int>, greater<int>> small_heap;
        for (const auto &it : sticks)
        {
            small_heap.push(it);
        }
        int cost = 0;
        int temp_cost = small_heap.top();
        small_heap.pop();
        while (!small_heap.empty())
        {
            temp_cost += small_heap.top();
            cost += temp_cost;
            small_heap.pop();
        }
        return cost;
    }
};

int main()
{
    Solution s;
    vector<int> in{2, 4,3};
    s.connectSticks(in);
    return 0;
}