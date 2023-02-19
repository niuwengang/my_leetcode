#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> res;
    const string arry[9] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; //-1
    vector<string> letterCombinations(string digits)
    {

        const int size = digits.size();

        for (int i = 0; i < size; i++)
        {
        }
    }

    void back(string &digits, int index)
    {
        // 终止条件
        if (index == digits.size())
        {
            res.push_back();
        }
        int digit = digits[index] - '0';
        string str = arry[digit];
        for (int i = 0; i < str.size(); i++)
        {
        }
    }
};

int main()
{
    return 0;
}