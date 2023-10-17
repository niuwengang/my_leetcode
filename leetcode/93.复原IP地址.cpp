
#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<string> restoreIpAddresses(string s)
    {
        BackTrack(s, 0);
        vector<string> res;
        for (auto &it : _all_paths)
        {
            string str;
            for (auto &it1 : it)
            {
                str += it1 + '.';
            }
            str.pop_back();
            res.push_back(str);
        }
        return res;
    }
    /*减枝*/
    inline bool isInRange(const string str)
    {
        if (str.size() > 3)
        {
            return false;
        }
        if (str.size() > 1 && str.front() == '0')
        {
            return false;
        }
        int num = std::stoi(str);
        if (num <= 255)
        {
            return true;
        }
        return false;
    }
    void BackTrack(const string str, const int index)
    {
        // stop
        if (index >= str.size())
        {
            if (_path.size() == 4)
            {
                _all_paths.push_back(_path);
            }
            return;
        }
        // circle
        for (int i = index; i < str.size(); i++)
        {
            string str_temp = str.substr(index, i - index + 1);
            if (isInRange(str_temp) == true)
            {
                _path.push_back(str_temp);
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
    vector<vector<string>> _all_paths;
};
int main()
{
    Solution s;
    string str = "25525511135";
    s.restoreIpAddresses(str);
    return 0;
}
