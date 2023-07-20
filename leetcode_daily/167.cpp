#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        unordered_map<int, int> record; // 数组+下标
        for (int i = 0; i < numbers.size(); i++)
        {
            auto it = record.find(target - numbers[i]);
            if (it != record.end())
            {
                return {it->second+1, i+1};
            }
            record[numbers[i]] = i;
        }
        return {0, 0};
    }
};

int main()
{
    Solution s;
    vector<int> in{2, 7, 11, 15};
    s.twoSum(in, 9);
    return 0;
}