#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1)
            return 0;
        vector<vector<int>> dp(m, vector<int>(n));

        for (int i = 0; i < m; i++)
        {
            if (obstacleGrid[i][0] == 1)
            {
                for (int j = i; j < m; j++)
                {
                    dp[i][0] = 0;
                }
                break;
            }
            else
            {
                dp[i][0] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (obstacleGrid[0][i] == 1)
            {
                for (int j = i; j < n; j++)
                {
                    dp[0][i] = 0;
                }
                break;
            }
            else
            {
                dp[0][i] = 1;
            }
        }

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (obstacleGrid[i][j] != 1)
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};

int main()
{
}