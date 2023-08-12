#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int minFallingPathSum(vector<vector<int>> &grid)
    {
        const int m = grid.size();
        const int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
        dp[0] = grid[0];
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k != j)
                    dp[i][j] = min(dp[i - 1][k] + grid[i][j], dp[i][j]);
                }
            }
        }
        return *min_element(dp[m - 1].begin(), dp[m - 1].end());
    }
};

int main()
{
    vector<vector<int>> in{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    s.minFallingPathSum(in);
    return 0;
}