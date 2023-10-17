#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<vector<string>> partition(string s)
    {
        BackTrack(s, 0);
        return _all_path;
    }
    bool isCircle(const string &str)
    {
        string str_cpy = str;
        reverse(str_cpy.begin(), str_cpy.end());
        return str_cpy == str;
    }
    void BackTrack(const string str, const int start_index)
    {
        // 终止条件
        if (start_index >= str.size())
        {
            _all_path.push_back(_path);
        }
        // 单层搜索
        for (int i = start_index; i < str.size(); i++)
        {
            string str_cut = str.substr(start_index, i - start_index + 1);
            if (isCircle(str_cut) == true)
            {
                _path.push_back(str_cut);
            }
            else
            {
                continue;
            }
            BackTrack(str, i + 1);
            _path.pop_back();
        }
    }
    vector<string> _path;
    vector<vector<string>> _all_path;
};
int main()
{
    return 0;
}