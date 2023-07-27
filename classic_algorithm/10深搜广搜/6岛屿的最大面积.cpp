#include "bits/stdc++.h"
using namespace std;

class Solution
{

  public:
    int x, y;
    int cnt_dfs = 0;
    typedef pair<int, int> Point;
    array<Point, 4> dir{Point(0, 1), Point(0, -1), Point(1, 0), Point(-1, 0)};
    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, Point point)
    {
        for (int i = 0; i < 4; i++)
        {
            Point next = Point(point.first + dir[i].first, point.second + dir[i].second);
            if (next.first < 0 || next.second < 0 || next.first >= x || next.second >= y)
            {
         continue;
            }
            if (grid[next.first][next.second] == 1 && visited[next.first][next.second] == false)
            {
                visited[next.first][next.second] = true;
                cnt_dfs++;
                dfs(grid, visited, next);
            }
        }
    }


    int bfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, Point point)
    {
        int cnt = 0;
        deque<Point> q;
        q.push_back(point);
        visited[point.first][point.second] = true;
        cnt++;
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
                    q.push_back(next);
                    visited[next.first][next.second] = true;
                    cnt++;
                }
            }
        }
        return cnt;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        x = grid.size();
        y = grid[0].size();
        int max_one = 0;
        vector<vector<bool>> visited(x, vector<bool>(y, false));
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (visited[i][j] == false && grid[i][j] == true)
                {

                    cnt_dfs = 1;
                    visited[i][j] = true;
                    dfs(grid, visited, Point(i, j));
                    max_one = max(max_one, cnt_dfs);
                    //     max_one = max(bfs(grid, visited, Point(i, j)), max_one);
                }
            }
        }
        return max_one;
    }
};

int main()
{

    return 0;
}