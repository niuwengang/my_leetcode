#include "bits/stdc++.h"
using namespace std;
class Solution
{
  public:
    int compress(vector<char> &chars)
    {
        if (chars.size() <= 1)
        {
            return chars.size();
        }
        int last_point = 0;
        int write_point = 0;
        int len = chars.size();
        chars.push_back(' ');
        for (int i = 0; i <= len-1; i++)
        {
            if (chars[i] != chars[i + 1])
            {
                if ((i - last_point) == 0)
                {
                    chars[write_point] = chars[i];
                    write_point++;
                }
                else
                {
                    chars[write_point] = chars[i];
                    write_point++;
                    string str = to_string(i - last_point + 1);
                    for (auto &it : str)
                    {
                        chars[write_point] = it;
                        write_point++;
                    }
                }
                last_point = i + 1;
            }
        }

        chars.assign(chars.begin(), chars.begin() + write_point);
        return write_point;
    }
};
int main()
{
    Solution s;
    vector<char> in{'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    s.compress(in);
    return 0;
}