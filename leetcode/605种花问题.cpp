#include "bits/stdc++.h"
using namespace std;

/*
0 0 0 --> 0 1 0
*/
class Solution
{
  public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int cnt = 0;
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.end(), 0);
        for (int i = 2; i < flowerbed.size(); i++)
        {
            if (flowerbed[i - 2] == 0 && flowerbed[i - 1] == 0 && flowerbed[i] == 0)
            {
                flowerbed[i - 1] = 1;
                cnt += 1;
            }
        }
        return cnt >= n;
    }
};

int main()
{
    vector<int> res{1, 0, 0, 0, 0, 1};
    Solution s;
    s.canPlaceFlowers(res, 2);
    return 0;
}