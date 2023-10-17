#include "bits/stdc++.h"
using namespace std;
class Solution
{
  public:
    int maxVowels(string s, int k)
    {
        auto check = [](const char& c) -> int { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; };
        int cnt = 0, res = 0;
        for (int i = 0; i < k; i++)
        {
            cnt += check(s[i]);
        }
        res = cnt;

        for (int i = k; i < static_cast<int>(s.size()); i++)
        {
            cnt += check(s[i]) - check(s[i - k]);
            res = max(res, cnt);
        }
        return res;
    }
};

int main()
{
    Solution s;
    s.maxVowels("novowels", 1);
    return 0;
}
