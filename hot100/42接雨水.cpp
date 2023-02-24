#include <bits/stdc++.h>
using namespace std;

// 1.单调栈
class Solution
{
public:
    int trap(vector<int> &height)
    {
        stack<int> block;
        int ans = 0;
        const int len = height.size();
        for (int index = 0; index < len; index++)
        {
            while (!block.empty() && height[index] > height[block.top()])
            {
                int top = block.top();
                block.pop();
                if (block.empty())
                    break; // 0 x的情况
                int left = block.top();
                int currWidth = index - left - 1;
                int currHeight = min(height[left], height[index]) - height[top];
                ans += currWidth * currHeight;
            }

            block.push(index);
        }
        return ans;
    }
};

int main()
{
    Solution *s = new Solution;
    vector<int> in{4, 2, 0, 3, 2, 5};
    s->trap(in);
    delete s;
    return 0;
}