#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++)
        {
            //更新新数组
            if (nums[fast] != val)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};

int main()
{
}