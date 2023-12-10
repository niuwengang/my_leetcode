#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int count = 0;
    int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1}; // 四个方向
    void bfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int x, int y)
    {
        queue<pair<int, int>> que;
        que.push({x, y});
        visited[x][y] = true; // 只要加入队列，立刻标记
        while (!que.empty())
        {
            pair<int, int> cur = que.front();
            que.pop();
            int curx = cur.first;
            int cury = cur.second;
            for (int i = 0; i < 4; i++)
            {
                int nextx = curx + dir[i][0];
                int nexty = cury + dir[i][1];
                if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())
                    continue; // 越界了，直接跳过
                if (!visited[nextx][nexty] && grid[nextx][nexty] == 1)
                {
                    que.push({nextx, nexty});
                    count++;
                    visited[nextx][nexty] = true; // 只要加入队列立刻标记
                }
            }
        }
    }

    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int x, int y)
    {
        if (x < 0 || x > grid.size() - 1 || y < 0 || y > grid[0].size() - 1)
        {
            return;
        }
        if (grid[x][y] == 0)
        {
            return;
        }
        if (visited[x][y] == true)
        {
            return;
        }

        visited[x][y] = true;
        count++;

        dfs(grid, visited, x + 1, y + 0);
        dfs(grid, visited, x + 0, y + 1);
        dfs(grid, visited, x - 1, y + 0);
        dfs(grid, visited, x + 0, y - 1);
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited = vector<vector<bool>>(n, vector<bool>(m, false));

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!visited[i][j] && grid[i][j] == 1)
                {

                    count = 0;
                    dfs(grid, visited, i, j);    // 将与其链接的陆地都标记上 true
                    result = max(count, result); // 遇到没访问过的陆地，+1
                }
            }
        }
        return result;
    }
};

int main()
{
    return 0;
}