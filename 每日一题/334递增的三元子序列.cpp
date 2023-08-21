#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    bool increasingTriplet(vector<int> &nums)
    {
        int small = INT_MAX;
        int mid = INT_MAX;
        for (const auto&it:nums)
        {
       
            if (it <= small)
            {
                small = it;
            }
            else if (it <= mid && it > small)
            {
                mid = it;
            }
            else if (it > mid)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{

    vector<int> vec = {20, 100, 10, 12, 5, 13};
    Solution S;
    S.increasingTriplet(vec);
    return 0;
}