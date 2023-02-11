#include <bits/stdc++.h>
using namespace std;

// 1.栈+哈希表对查 o(n)
class Solution1
{
public:
    bool isValid(string s)
    {
        const int size = s.size();
        stack<char> record;
        unordered_map<char, char> map = {{'[', ']'}, {'{', '}'}, {'(', ')'}};
        for (int i = 0; i < size; i++)
        {
            if (map.find(s[i]) != map.end()) // 左符
            {
                record.push(s[i]);
            }
            else // 右符
            {

                if (record.size() != 0) 
                {
                    if (s[i] == map[record.top()])//右符且对称 且不为空
                    {
                        record.pop();
                        continue;
                    }
                }
                return false;
            }
        }
        return (record.size() == 0);
    }
};

int main()
{
    Solution1 s;
    s.isValid("(])");
    return 0;
}