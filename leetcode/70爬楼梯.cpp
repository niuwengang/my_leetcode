#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int climbStairs(int n)
    {
        if (n == 1)
            return 1;
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
// class Solution
// {
//   public:
//     int climbStairs(int n)
//     {
//         vector<int> record(n + 1, 0);
//         return dfs(n, record);
//     }
//     int dfs(int n, vector<int> &vec)
//     {
//         if (vec[n] > 0)
//         {
//             return vec[n];
//         }
//         if (n == 1)
//         {
//             vec[n] = 1;
//             return 1;
//         }
//         else if (n == 2)
//         {
//             vec[n] = 2;
//             return 2;
//         }
//         else
//         {
//             vec[n] = dfs(n - 1, vec) + dfs(n - 2, vec);
//         }
//         return vec[n];
//     }
// };

int main()
{
    return 0;
}