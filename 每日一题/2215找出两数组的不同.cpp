#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> map1;
        set<int> map2;

        for (auto const &it : nums1)
        {
            map1.insert(it);
        }
        for (auto const &it : nums2)
        {
            map2.insert(it);
        }
        set<int> vec1;
        for (auto const &it : nums1)
        {
            if (map2.find(it) == map2.end())
            {
                vec1.insert(it);
            }
        }
        set<int> vec2;
        for (auto const &it : nums2)
        {
            if (map1.find(it) == map1.end())
            {
                vec2.insert(it);
            }
        }
        vector<vector<int>> res{{vec1.begin(), vec1.end()}, {vec2.begin(), vec2.end()}};
        return res;
    }
};
int main()
{
    return 0;
}