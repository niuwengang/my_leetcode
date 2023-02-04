#include <bits/stdc++.h>
using namespace std;

//1.双循环遍历O(n^2)
class Solution1
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        const int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

//2.一次遍历+hashmap查找 O(n)
class Solution2
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        const int len = nums.size();
        unordered_map<int, int> table;
        unordered_map<int,int>::iterator point;
        for (int i = 0; i < len; i++)
        {
            point=table.find(target - nums[i]);
            if(point!=table.end())//找到
            {
                return {i,point->second};
            }

            table[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    return 0;
}