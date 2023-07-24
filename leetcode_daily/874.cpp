#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:

    int robotSim(vector<int> &commands, vector<vector<int>> &obstacles)
    {
        typedef pair<int, int> point;
        vector<point> dir_list{point(0, 1), point(1, 0), point(0, -1), point(-1, 0)}; // 北东南西
        set<point> isObstacles;

        enum dir_flag
        {
            north,
            east,
            south,
            west,
        };

        /*障碍物导入哈希表*/
        if (!obstacles.empty())
        {
            for (int r = 0; r < obstacles.size(); r++)
            {
                isObstacles.insert(point(obstacles[r][0], obstacles[r][1]));
            }
        }

       
        /*解析指令*/
        set<int,greater<int>> max_dis_2;
        int dir = dir_flag::north; // 默认北方
        point current_loc(0, 0);
        for (const auto &it : commands)
        {
            if (it == -1) // 顺时帧
            {
                dir++;
                if (dir == 4)
                {
                    dir = 0;
                }
            }
            else if (it == -2) // 逆时帧
            {
                dir--;
                if (dir == -1)
                {
                    dir = 3;
                }
            }
            else // 前进
            {
                int steps = it;
                while (steps != 0)
                {
                    current_loc.first += dir_list[dir].first;
                    current_loc.second += dir_list[dir].second;
                    if (isObstacles.find(current_loc) != isObstacles.end()) // 有障碍物
                    {
                        current_loc.first -= dir_list[dir].first;
                        current_loc.second -= dir_list[dir].second;
                        break;
                    }
                    steps--;
                }
            }
            max_dis_2.insert(current_loc.first * current_loc.first + current_loc.second*current_loc.second);
        }
        return *max_dis_2.begin();
    }
};

int main()
{

    vector<int> cmd{6, -1, -1, 6};
    vector<vector<int>> obstacle{}; //{{2, 4}};
    Solution s;
    s.robotSim(cmd, obstacle);
    return 0;
}