#include "bits/stdc++.h"
using namespace std;


/*
时间复杂度O(n)
*/
class Solution
{
  public:
    int subtractProductAndSum(int n)
    {
        string str = to_string(n);
        const int len = str.size();
        int product = 1, sum = 0;
        for (int i = 0; i < len; i++)
        {
            int num = str[i] - '0';
            product *= num;
            sum += num;
        }
        return (product - sum);
    }
};

int main()
{
    shared_ptr<Solution> solve_ptr = std::make_shared<Solution>();
    solve_ptr->subtractProductAndSum(244);
     return 0;
}