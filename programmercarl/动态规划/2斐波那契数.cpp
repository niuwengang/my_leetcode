#include <bits/stdc++.h>
using namespace std;

/*
1. dp[i] 第i个斐波那契数的数值
2.递推公式 dp[i]=dp[i-1]+dp[i-2]
3.dp数组初始化dp[0]=0 dp[1]=1
4.遍历顺序 从前向后遍历
5. 打印dp数组
*/
class Solution
{
  public:
    int fib(int n)
    {
        if(n<2)
        return n;
        vector<int> dp(n + 1);
        dp[0]=0;dp[1]=1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
// class Solution
// {
//   public:
//     int fib(int n)
//     {
//        return f(n);
//     }

//     int f(int n)
//     {
//         if (n<2)
//             return n;
//         else
//         {
//             return f(n-1)+f(n-2);
//         }
//     }
// };

int main()
{
    return 0;
}