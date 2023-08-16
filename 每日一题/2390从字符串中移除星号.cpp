#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    string removeStars(string s)
    {
        string res;
        for (const auto &it : s)
            it == '*' ? res.pop_back() : res.push_back(it);
        return res;
    }
};

int main()
{
    Solution s;
    s.removeStars("leet**cod*e");
    return 0;
}