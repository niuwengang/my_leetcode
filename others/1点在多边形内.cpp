#include "bits/stdc++.h"
using namespace std;

struct point
{
  public:
    point(double x, double y) : _x(x), _y(y)
    {
    }
    point operator-(const point &p)
    {

        return point(this->_x - p._x, this->_y - p._y);
    }
    double cross(const point &p) // 0平行 <0逆时针 >0顺时针
    {
        return this->_x * p._y - this->_y * p._x;
    }

    double _x;
    double _y;
};

/*
绕多边形一周计算 OA cross AB 应该都小于0 即:逆时帧
*/
class Solution
{
  public:
    bool isInPolygon(vector<point> polygon, point target)
    {
        polygon.push_back(polygon.front());
        for (int i = 0; i < polygon.size() - 1; i++)
        {
            point vec1 = target - polygon[i];
            point vec2 = polygon[i + 1] - polygon[i];
            if (vec1.cross(vec2) > 0) // 逆时帧
            {

                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;

    point a(0, 0);
    point b(1, 0);
    point c(0, 1);
    vector<point> points{a, b, c};
    point target(0, 0);
    s.isInPolygon(points, target);

    return 0;
}