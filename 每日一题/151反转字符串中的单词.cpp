#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    string reverseWords(string s)
    {
        vector<string> vec;
        vec = split(s, " ");
        string str;
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            str += vec[i] + " ";
        }
        return str.substr(0, str.size() - 1);
        }
    vector<string> split(const string str, const string pattern)
    {
        vector<string> res;
        if (str.size() == 0)
            return res;
        string strs = str + pattern;
        size_t pos = strs.find(pattern);
        while (pos != strs.npos)
        {
            string temp = strs.substr(0, pos);
            if (temp.size() != 0)
            {
                res.push_back(temp);
            }

            strs = strs.substr(pos + 1, strs.size());
            pos = strs.find(pattern);
        }
        return res;
    }
};

int main()
{
    string str = " the sky is blue";
    Solution s;
    s.reverseWords(str);
    return 0;
}