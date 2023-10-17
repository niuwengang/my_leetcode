#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int numIslands(vector<vector<char>> &grid)
    {
        vector<vector<bool>> grid_record{true};
        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
            }
        }
    }
    void bfs(vector<vector<char>> &grid, pair<int, int> &start)
    {
        const int dir[4][2] = {{0, 1}, {0, 1}, {-1, 0}, {0, -1}};
        deque<pair<int, int>> q;
        q.push_back(start);
        while (!q.empty())
        {
            int len = q.size();
            for (int i = 0; i < len; i++)
            {
                pair<int, int> cur_node = q.front();
                q.pop_front();
            }
        }
    }
    void dfs(vector<vector<char>> &grid, )
    {
    }
};

int main()
{
    return 0;
}