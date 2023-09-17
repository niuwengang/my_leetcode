#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        bakc_track(candidates, target, 0);
        return _all_vec;
    }

    void bakc_track(const vector<int> vec, const int target, const int start_index)
    {
        // 终止条件
        int sum = accumulate(_cur_vec.begin(), _cur_vec.end(), 0);
        if (sum > target)
        {
            return;
        }
        if (sum == target)
        {
            _all_vec.push_back(_cur_vec);
            return;
        }
        // 循环递归
        for (int i = start_index; i < vec.size(); i++)
        {
            _cur_vec.push_back(vec[i]);
            bakc_track(vec, target, i+0);
            _cur_vec.pop_back();
        }
    }
    vector<int> _cur_vec;
    vector<vector<int>> _all_vec;
};

int main()
{
    return 0;
}