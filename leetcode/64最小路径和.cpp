#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int minPathSum(vector<vector<int>> &grid)
    {
        const int m = grid.size();
        const int n = grid[0].size();

        vector<vector<int>> dp;
        for(int k=1;k<m;k++)
        {
            dp[0][k]=dp[0][k-1]+grid[0][k];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
            }
        }
    }
};

int main()
{
    Solution s;

    return 0;
}