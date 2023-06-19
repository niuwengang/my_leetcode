#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isValid(string s)
    {
        int len = s.size();
        if (len % 2 == 1)
            return false;

        stack<char> map;
        for (const auto &it : s)
        {
            /*压入堆栈*/
            if (it == '[')
                map.push(']');
            else if (it == '{')
                map.push('}');
            else if (it == '(')
                map.push(')');
            else
            {
                
                if (map.size()!=0&& it== map.top())
                    map.pop();
                    else return false;
            }
        }
        return !map.size();
    }
};

int main()
{
    Solution s;
    s.isValid("){");
    return 0;
}