#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    bool isSubsequence(string s, string t)
    {
        unordered_map<char, int> record;
        for (int i = 0; i < t.size(); i++)
        {
            record.insert(pair<char, int>(t[i], i));
        }

        int last_index = -1;
        for (const auto &it : s)
        {
            auto point = record.find(it);
            if (point != record.end())
            {
                int cur_index = point->second;
                if (cur_index > last_index)
                {
                    last_index = cur_index;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
}