#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    double myPow(double x, int n)
    {
        double res;
        if (n < 0)
        {
            res = 1 / x;
            n = abs(n);
            while (n != 1)
            {
                res *= (1 / x);
                n--;
            }
            return res;
        }

        else if (n > 0)
        {
            res = x;
            while (n != 1)
            {
                res *= x;
                n--;
            }
            return res;
        }
        else
        {
            return 1;
        }
    }
};

int main()
{
    Solution s;
    cout << s.myPow(2.0000, -2);
    return 0;
}