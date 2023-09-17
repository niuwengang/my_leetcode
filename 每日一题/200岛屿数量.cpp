#include "bits/stdc++.h"
using namespace std;

// bfs
class Solution
{
  public:
    struct point
    {
        int x;
        int y;
    };
    int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int numIslands(vector<vector<char>> &grid)
    {
        deque<point> q;
    }
    void bfs(deque<point> &q, point start_point)
    {
        while (!q.empty())
        {
            int size = q.size();

            for (int index = 0; i < size; i++)
            {
                point cur_point = q.front();
                for (int i = 0; i < 4; i++)
                {
                    cur_point.x+=dir[i]
                }
            }
        }
    }
};

int main()
{
}