#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int x, y;
    int flag_link = 0;
    int cnt = 0;
    typedef pair<int, int> Point;
    array<Point, 4> dir{Point(0, 1), Point(0, -1), Point(1, 0), Point(-1, 0)};
    void bfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, Point point)
    {
        deque<Point> q;
        q.push_back(point);
        visited[point.first][point.second] = true;
        cnt++;
        if (point.first == 0 || point.second == 0 || point.first == x - 1 || point.second == y - 1)
        {
            flag_link = 1;
        }
        while (!q.empty())
        {
            Point cur = q.front();
            q.pop_front();

            for (int i = 0; i < 4; i++)
            {
                Point next = Point(cur.first + dir[i].first, cur.second + dir[i].second);
                if (next.first < 0 || next.second < 0 || next.first >= x || next.second >= y)
                {
                    continue;
                }
                if (grid[next.first][next.second] == 1 && visited[next.first][next.second] == false)
                {
                    if (next.first == 0 || next.second == 0 || next.first == x - 1 || next.second == y - 1)
                    {
                        flag_link = 1;
                    }
                    q.push_back(next);
                    visited[next.first][next.second] = true;
                    cnt++;
                }
            }
        }
    }

    int numEnclaves(vector<vector<int>> &grid)
    {
        int sum = 0;
        x = grid.size();
        y = grid[0].size();
        vector<vector<bool>> visited(x, vector<bool>(y, false));
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (visited[i][j] == false && grid[i][j] == true)
                {

                    flag_link = 0;
                    cnt = 0;
                    bfs(grid, visited, Point(i, j));
                    if (flag_link == 0)
                    {
                        sum += cnt;
                    }
                }
            }
        }
        return sum;
    }
};
