#include <bits/stdc++.h>
using namespace std;

// 1.暴力 两层循环+查找表 o(n^3)
class Solution1
{
public:
    int lengthOfLongestSubstring(string s)
    {
        const int len = s.size();
        if (len <= 1)
            return len;

        priority_queue<int, vector<int>, less<int>> big_heap; // 大顶堆
        big_heap.emplace(0);
        for (int i = 0; i < len; i++)
        {
            unordered_set<char> table;
            table.emplace(s[i]);
            for (int j = i + 1; j < len; j++)
            {
                // 未找到
                if (table.find(s[j]) == table.end())
                {
                    table.emplace(s[j]);
                }
                else
                {
                    big_heap.emplace(j - i);
                    break;
                }

                if (j == len - 1)
                {
                    big_heap.emplace(len - 1 - i + 1);
                }
            }
        }
        return big_heap.top();
    }
};

// 2. 滑窗 重复且在滑窗的left从滑窗开始 o(n)
class Solution2
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> table;
        int left = 0, res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            auto it = table.find(s[i]);
            // 找到重复且在滑窗内 
            if (it != table.end() && it->second >= left)
            {
                left = it->second + 1;
            }
            table[s[i]]=i;
            int len=i-left+1;
            res=max(res,len);
        }
        return res;
    }
};

//3.DP解法

int main()
{
    string str = "au";
    Solution2 s;
    s.lengthOfLongestSubstring(str);
}