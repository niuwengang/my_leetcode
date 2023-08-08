#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int alternateDigitSum(int n)
    {
        string str = to_string(n);
        int sum = 0;
        bool flag = false;
        for (const auto &it : str)
        {
            flag ^= 1;
            if (flag == true)
            {
                sum += (it - '0');
            }
            else
            {
                sum -= (it - '0');
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    s.alternateDigitSum(521);
    return 0;
}