#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        const int len = mat.size();
        int sum = 0;
        for (int i = 0; i < len; i++)
            sum += mat[i][i] + mat[i][len - 1 - i];
        return sum + (len % 2 == 0 ? 0 : -mat[len / 2][len / 2]);
    }
};

int main()
{
    vector<vector<int>> res{{ 7, 3, 1, 9 }, { 3, 4, 6, 9 }, { 6, 9, 6, 6 }, { 9, 5, 8, 5 }};
    Solution s;
    s.diagonalSum(res);
    return 0;
}