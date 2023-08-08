#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        const int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n));
        copy(matrix[0].begin(), matrix[0].end(), dp[0].begin());
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int cur = dp[i - 1][j];
                if (j > 0) //
                    cur = min(cur, dp[i - 1][j - 1]);
                if (j < n - 1) //
                    cur = min(cur, dp[i - 1][j + 1]);

                dp[i][j] = cur + matrix[i][j];
            }
        }
        return *min_element(dp[n - 1].begin(), dp[n - 1].end());
    }
};

int main()
{
    vector<vector<int>> in{{100, -42, -46, -41}, {31, 97, 10, -10}, {-58, -51, 82, 89}, {51, 81, 69, -51}};

    Solution s;
    s.minFallingPathSum(in);
    return 0;
}