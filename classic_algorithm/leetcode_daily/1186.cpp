#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maximumSum(vector<int> &arr)
    {
        const int len = arr.size();
        vector<array<int, 2>> dp(len);

        dp[0][0] = arr[0];
        dp[0][1] = 0;
        int max_one = arr[0];
        for (int i = 1; i < len; i++)
        {
            dp[i][0] = max(dp[i - 1][0] + arr[i], arr[i]);
            dp[i][1] = max(dp[i - 1][1] + arr[i], dp[i - 1][0]);
            max_one = max(max_one,max(dp[i][0],dp[i][1]));
        }
        return max_one;
    }
};

int main()
{
    return 0;
}