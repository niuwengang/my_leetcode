#include "bits/stdc++.h"
using namespace std;
class Solution
{
  public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        for (auto &it : candidates)
        {
            _record.insert(it);
        }
        back_track(candidates, target, 0);
        return _all_path;
    }

    void back_track(const vector<int> vec, const int target, int start_index)
    {
        if (_sum > target)
        {
            return;
        }
        if (_sum == target)
        {
            _all_path.push_back(_path);
        }

        for (int i = start_index; i < vec.size(); i++)
        {

                    if (_record.find(vec[i]) != _record.end())
            {
                continue;
            }
            _sum += vec[i];
            _path.push_back(vec[i]);
            back_track(vec, target, i + 1);
            _path.pop_back();
            _sum -= vec[i];
        }
    }
    int _sum;
    vector<int> _path;
    vector<vector<int>> _all_path;
    set<int> _record;
};

int main()
{
    return 0;
}