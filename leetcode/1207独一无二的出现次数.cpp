#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> record;
        for (const auto &it : arr)
        {
            record[it]++;
        }
        multiset<int> map;
        for (const auto &it : record)
        {
            if (map.find(it.second) == map.end())//没找到一样的出现次数
            {
                map.insert(it.second);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    vector<int> res{1, 2, 2, 1, 1, 3};
    Solution s;
    s.uniqueOccurrences(res);
    return 0;
}