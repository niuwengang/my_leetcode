#include "bits/stdc++.h"
using namespace std;
class Solution
{
  public:
    int longestOnes(vector<int> &nums, int k)
    {
        int res_cnt = 0;
        int lp = 0, rp = 0;
        int zeros_num = 0;
        for (int rp = 0; rp < nums.size(); rp++)
        {
            if (nums[rp] == 0)
                zeros_num++;
            while (zeros_num > k)
            {
                if (nums[lp++] == 0)
                    zeros_num--;
            }
            res_cnt = max(res_cnt, rp - lp + 1);
        }
        return res_cnt;
    }
};
int main()
{

    return 0;
}