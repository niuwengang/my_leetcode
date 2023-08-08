#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maximumCostSubstring(string s, string chars, vector<int> &vals)
    {
        unordered_map<char, int> table;
        for (int i = 0; i < chars.size(); i++)
        {
            table[chars[i]] = vals[i];
        }

        vector<int> dp(s.size());

        auto func = [&table](char cstr) -> int {
            auto point = table.find(cstr);
            return (point == table.end() ? cstr - 'a' + 1 : (*point).second);
        };

        dp[0] = func(s[0]);
        int max_value=0;
        for (int i = 1; i < s.size(); i++)
        {
            int cur_value = func(s[i]);
            dp[i] = max(dp[i - 1] + cur_value, cur_value);
            max_value = max(dp[i], max_value);
        }
        return max(max_value,dp[0]);
    }
};

int main()
{
    Solution s;
    vector<int> in{};

    return 0;
}