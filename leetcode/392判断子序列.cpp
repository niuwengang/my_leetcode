#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    bool isSubsequence(string s, string t)
    {
        if (s.size() <= 0)
            return true;
        stack<char> k;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            k.push(s[i]);
        }
        for (auto &it : t)
        {
            if (k.size() == 0)
            {
                return true;
            }
            else if (it == k.top())
            {
                k.pop();
            }
            else
            {
            }
        }
        return k.size() == 0;
    }
};

int main()
{
    Solution s;
    s.isSubsequence("b", "abc");
    return true;
}