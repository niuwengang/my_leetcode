#include "bits/stdc++.h"
using namespace std;

//位运算



//快速幂
class Solution
{
  public:
    double myPow(double x, int  n)
    {
       long long  N=n;
       if (N > 0)
       {
           return quickMul(x, N);
        }
        else if (N < 0)
        {
           return 1 / quickMul(x, -N);
        }
        else
        {
            return 1;
        }
    }

    double quickMul(double num, long long  n)
    {
        if (n == 1)
        {
            return num;
        }
        if (n % 2 == 0) // 偶数
        {
            double res = quickMul(num, n / 2);
            return res * res; // 2^9=2^4*2^4*2
        }
        else
        {
            double res = quickMul(num, n / 2);
            return res * res * num; // 2^8=2^4*2^4
        }
    }
};

int main()
{
    Solution s;
    cout << s.myPow(2.1,3);
    return 0;
}