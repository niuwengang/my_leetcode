#include "bits/stdc++.h"
using namespace std;
// 双指针

class Solution
{
  public:
    string reverseVowels(string s)
    {
        string str = s;
        set<char> record = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left_point = 0, right_point = str.size() - 1;
        while (left_point < right_point)
        {
            if (record.find(str[right_point]) != record.end() && record.find(str[left_point]) != record.end())
            {
                swap(str[right_point], str[left_point]);
                right_point--;
                left_point++;
                continue;
            }
            if (record.find(str[left_point]) == record.end())
            {
                left_point++;
            }
            if (record.find(str[right_point]) == record.end())
            {
                right_point--;
            }
        }
        return str;
    }
};

int main()
{
    Solution s;
    string str = "leetcode ";
    s.reverseVowels(str);
    return 0;
}