#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<int> circularGameLosers(int n, int k)
    {
        set<int> record;
        vector<int> res;
        int index = 1; // 序列下标
        int cnt = 1;   // 轮数
        while (record.find(index) == record.end())
        {
            record.insert(index);
            index += k * cnt;
            index %= n;
            index = index == 0 ? n : index;
            cnt++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (record.find(i) == record.end())
            {
                res.push_back(i);
            }
        }
        return res;
    }
};

int main()
{
    Solution S;
    S.circularGameLosers(2, 1);
    return 0;
}