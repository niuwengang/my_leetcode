#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    typedef pair<int, int> Point;
    vector<Point> dir = {Point(0, -1), Point(0, 1), Point(-1, 0), Point(1, 0)};

    void dfs(const vector<vector<char>> &grid, vector<vector<int>> &visited, const Point &point)
    {
        for (int i = 0; i < 4; i++)
        {
            Point cur = point;
            Point next = Point(cur.first + dir[i].first, cur.second + dir[i].second);
            if (next.first < 0 || next.first >= _x_size || next.second < 0 || next.second >= _y_size)
            {
                continue;
            }
            if (visited[next.first][next.second] != 1 && grid[next.first][next.second] == '1')
            {
                visited[next.first][next.second] = 1;
                dfs(grid, visited, next);
            }
        }
    }
    void bfs(const vector<vector<char>> &grid, vector<vector<int>> &visited, const Point &point)
    {
        queue<Point> q;
        q.push(point);
        visited[point.first][point.second] = 1;
        while (q.size() != 0)
        {
            Point cur = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                Point next = Point(cur.first + dir[i].first, cur.second + dir[i].second);
                if (next.first < 0 || next.first >= _x_size || next.second < 0 || next.second >= _y_size)
                {
                    continue;
                }
                if (visited[next.first][next.second] != 1 && grid[next.first][next.second] == '1')
                {
                    q.push(next);
                    visited[next.first][next.second] = 1;
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        _x_size = grid.size();
        _y_size = grid[0].size();
        vector<vector<int>> visited(_x_size, vector<int>(_y_size, 0));
        int cnt = 0;
        for (int x = 0; x < _x_size; x++)
        {
            for (int y = 0; y < _y_size; y++)
            {
                if (visited[x][y] != 1 && grid[x][y] == '1')
                {
                    cnt++;
                    Point target = Point(x, y);
                 //   bfs(grid, visited, target);
                    dfs(grid, visited, target);
                }
            }
        }
        return cnt;
    }
    int _x_size, _y_size;
};

int main()
{
    Solution s;
    // s.numIslands();
}