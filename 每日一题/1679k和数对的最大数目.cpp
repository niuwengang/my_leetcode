#include "bits/stdc++.h"
using namespace std;
class Solution//nlogn 
{
  public:
    int maxOperations(vector<int> &nums, int k)
    {
        int res_cnt = 0;
        sort(nums.begin(), nums.end()); // nlogn 默认升序
        int lp = 0, rp = nums.size() - 1;//nlogn
        while (lp < rp)
        {
            int sum = nums[lp] + nums[rp];
            if (sum == k)
            {
                lp++;
                rp--;
                res_cnt++;
            }
            else if (sum < k)
            {
                lp++;
            }
            else
            {
                rp--;
            }
        }

        return res_cnt;
    }
};

int main()
{
    return 0;
}