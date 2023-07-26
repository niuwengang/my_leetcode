#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int halveArray(vector<int> &nums)
    {
        double max_half = static_cast<double>(accumulate(nums.begin(), nums.end(), 0) /2) ;
        priority_queue<double> big_heap(nums.begin(), nums.end());
        double sum = 0;
        int cnt = 0;
        while (sum<=max_half )
        {
            double num_half = big_heap.top() /2;
            sum += num_half;
             big_heap.pop();
            big_heap.push(num_half);
            ++cnt;
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    vector<int> vec{5, 19, 8, 1};
    s.halveArray(vec);
    return 0;
}