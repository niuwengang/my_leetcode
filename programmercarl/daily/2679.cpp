#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef priority_queue<int, vector<int>, less<int>> big_heap;

  public:
    int matrixSum(vector<vector<int>> &nums)
    {

        vector<big_heap> vec;
        for (const auto& it1:nums)
        {
            big_heap temp_heap;
            for (const auto&it2:it1)
            {
                temp_heap.push(it2);
            }
            vec.push_back(temp_heap);
        }
        
        int sum = 0;

         for (int index = 0; index < nums[0].size(); index++)
        {
            big_heap record;
            for (auto & it:vec)
            {
                record.push(it.top());
                it.pop();
            }
            sum += record.top();
        }

        return sum;
    }
};

int main()
{
    vector<vector<int>> demo;
    demo.push_back({7, 2, 1});
    demo.push_back({6, 5, 3});
    demo.push_back({6, 4, 2});
    demo.push_back({3, 2, 1});
    Solution s;
    s.matrixSum(demo);
    return 0;
}