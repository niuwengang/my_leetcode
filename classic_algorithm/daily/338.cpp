#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<int> countBits(int n)
    {
        auto f = [](int num) -> int {
            int cnt = 0;
            while (num != 0)
            {
                if (num % 2 == 1)
                    cnt++;
                num /= 2;
            }
            return cnt;
        };
        vector<int> res;
        for (int i = 0; i <= n; i++)
        {
            res.push_back(f(i));
        }
        return res;
    }
};

    int main()
    {
        Solution S;
        S.countBits(5);
        return 0;
    }