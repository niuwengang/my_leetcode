#include <bits/stdc++.h>
using namespace std;

// %5 %5

class Solution
{
  public:
    unordered_map<string, bool> his_record;
    bool isSubStr(const string &str)
    {
        auto it =his_record.find(str);
        if(it!=his_record.end())
        {
            return it->second;
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != str[str.size() - 1 - i])
            {
                his_record[str] = false;
                return false;
            }
        }
        his_record[str] = true;
        return true;
    }

    int countSubstrings(string s)
    {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                string temp = s.substr(i, j - i + 1);
                if (isSubStr(temp) == true)
                    cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    s.countSubstrings("aba");
    return 0;
}