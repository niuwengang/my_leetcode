#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<long long> maximumEvenSplit(long long finalSum)
    {
        deque<long long> res_q;
        if (finalSum % 2 != 0)
            return {};
        for (int index = 2; index <= finalSum; index += 2)
        {
            res_q.push_back(index);
            finalSum -= index;
        }
        res_q.back() += (finalSum);
        vector<long long>res(res_q.begin(),res_q.end());
        return res;
    }
};

int main()
{
    return 0;
}