#include <bits/stdc++.h>
using namespace std;

// 最长回文子串

class Solution
{
public:
    vector<pair<int, int>> res; // 长度 起点

    string max_circle(string str)
    {
        unordered_map<char, int> table;
        // 滑窗
        int left = 0;
        const int len = str.size();

        for (int i = 0; i < len; i++)
        {
            // 如果不符合circle 记下字符串及长度
            char *temp_c;
            str.copy(temp_c, i - left + 1, left); //??
            string temp = temp_c;
            if (ifCircle(temp) != true)
            {
                res.push_back(pair<int, int>(left, i - left + 1));
                left++;
            }
        }
        sort(res.begin(), res.end(), [](pair<int, int> a, pair<int, int> b)
             { return a.first > b.first; });

                  char *temp_c1;
            str.copy(temp_c1,(*res.begin()).first, (*res.begin()).second); //??
            string temp1 = temp_c1;
            return temp1;
             
    }
    bool ifCircle(string str)
    {
        int len = str.size();
        // 偶数个
        if (len % 2 == 0)
        {
            for (int i = 0; i < len / 2; i++)
            {
                if (str[i] != str[len - 1 - i])
                    return false;
            }
            return true;
        }

        // 奇数个
        else
        {
            for (int i = 0; i < len / 2 - 1; i++)
            {
                if (str[i] != str[len - 1 - i])
                    return false;
            }
            return true;
        }
    }
};

int main()
{
    string str = "aaabab";
    Solution s;
    
    string str_res=s.max_circle(str);

    return 0;
}

/*
bb
bab
baabcddc
bacab
*/