#include <bits/stdc++.h>
using namespace std;

// https : // leetcode.cn/problems/daily-temperatures/solutions/71433/leetcode-tu-jie-739mei-ri-wen-du-by-misterbooo/

class Solution
{
  public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> res(temperatures.size(),0);//默认的给出来
        stack<int> record; // 放下标
        int idx=0;
        for_each(temperatures.begin(), temperatures.end(), [&](const int temp) {
           
            while (!record.empty() && temp > temperatures[record.top()])//维护一个递减
            {
                auto t=record.top();
                record.pop();
                res[t]=idx-t;
            }
            record.push(idx);
            idx++;
        });
        return res;
    }
};
//         class Solution
// {

//   public:
//     vector<int> dailyTemperatures(vector<int> &temperatures)
//     {

//         const int len = temperatures.size();
//         vector<int> res(len);
//         set<pair<int, int>> record;
//         int idx = 0;
//         for_each(temperatures.begin(), temperatures.end(),
//                  [&record, &idx](int obj) { record.insert(pair<int, int>(obj, idx++)); });
//         for (int index = 0; index < len; index++)
//         {
//             auto point = find_if(record.begin(), record.end(), [temperatures, index](const pair<int, int> element) {
//                 return (temperatures[index] < element.first) && (index < element.second);
//             });
//             if (point != record.end())
//             {
//                 res[index] = point->second - index;
//             }
//             else
//             {
//                 res[index] = 0;
//             }
//         }
//         return res;
//     }
// };

int main()
{
    Solution s;
    vector<int> in{73, 74, 75, 71, 69, 72, 76, 73};
    s.dailyTemperatures(in);
    return 0;
}