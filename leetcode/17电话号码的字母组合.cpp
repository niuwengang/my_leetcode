#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    unordered_map<int, string> table;

    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        table[2] = "abc";
        table[3] = "def";
        table[4] = "ghi";
        table[5] = "jkl";
        table[6] = "mno";
        table[7] = "pqrs";
        table[8] = "tuv";
        table[9] = "wxyz";

        back_track(digits, 0);
        return _res_str;
    }
    // index 当前遍历到的集合
    void back_track(const string str_dig, int index)
    {
        if (index == str_dig.size())
        {
            _res_str.push_back(_str);
        }

        int num_dig = str_dig[index] - '0';
        string letter = table[num_dig];
        for (int i = 0; i < letter.size(); i++)
        {
            _str.push_back(letter[i]);
            back_track(str_dig, index + 1);
            _str.pop_back();
        }
    }
    string _str; // 单结果
    vector<string> _res_str;
};

int main()
{
    return 0;
}