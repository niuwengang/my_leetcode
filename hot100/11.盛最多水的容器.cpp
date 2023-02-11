#include <bits/stdc++.h>
using namespace std;

// 1.暴力  超时 o(n^2)
class Solution1
{
public:
    int maxArea(vector<int> &height)
    {
        priority_queue<int, vector<int>, less<int>> q;
        const int len = height.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                int block = min(height[i], height[j]) * (j - i);
                q.push(block);
            }
        }
        return q.top();
    }
};

//2.双指针 o(n^2)
class Solution2
{
public:
    int maxArea(vector<int> &height)
    {

        const int width = height.size();
        int i = 0, j = width - 1;
        int res = 0;
        while (i < j)
        {
            int area = min(height[i], height[j]) * (j - i);

            res = max(res, area);
            if (height[i] <= height[j]) // 处境不好就改变
            {
                i++;
            }
            else if (height[j] <= height[i])
            {
                j--;
            }
            else{

            }
   
        }
        return res;
    }
};

int main()
{
    return 0;
}