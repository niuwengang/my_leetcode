#include "bits/stdc++.h"
using namespace std;

// 找出所有相加之和为 n 的 k 个数的组合，且满足下列条件
class Solution
{
  public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        backtrack(n, k, 9, 1);
        return _res;
    }
    void backtrack(const int sum, const int k, const int max_index, int start_index)
    {
        // 1-- 终止条件
        if (_path.size() == k)
        {

            if (accumulate(_path.begin(), _path.end(), 0) == sum)
            {
                _res.push_back(_path);
            }
            return;
        }
        // 2--遍历
        for (int i = start_index; i < max_index; i++)
        {
            _path.push_back(i);
            backtrack(sum, k, max_index, start_index);
            _path.pop_back();
        }
    }
    vector<int> _path;
    vector<vector<int>> _res;
};

int main()
{
    Solution s;

    // s.backtrack();

    return 0;
}