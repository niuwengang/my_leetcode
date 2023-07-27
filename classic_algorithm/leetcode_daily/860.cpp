#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool lemonadeChange(vector<int> &bills)
    {
        int money_5 = 0, money_10 = 0, money_20 = 0;
        for (const auto &it : bills)
        {
            if (it == 5)
            {
                money_5++;
            }
            else if (it == 10)
            {
                money_10++;
                if (money_5 >= 1)
                {
                    money_5--;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                money_20++;
                if (money_5 >= 1 && money_10 >= 1)
                {
                    money_5--;
                    money_10--;
                }
                else if (money_5 >= 3)
                {
                    money_5 -= 3;
                }
                else // 找不开了
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> example{5, 5, 5, 5, 10, 5, 10, 10, 10, 20};
    s.lemonadeChange(example);
    return 0;
}