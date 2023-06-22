#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    string removeDuplicates(string s)
    {
        stack<char> map;
        for (const auto &it : s)
        {
            if (map.size() == 0)
            {
                map.push(it);
            }
            else
            {
                if (map.top() == it)
                    map.pop();
                else
                {
                    map.push(it);
                }
            }
        }
        string res;
        while (map.size() != 0)
        {
            res += map.top();
            map.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
int main()
{
}