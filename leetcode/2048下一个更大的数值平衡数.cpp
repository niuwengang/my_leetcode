#include "bits/stdc++.h"
using namespace std;
class Solution
{
  public:
    int nextBeautifulNumber(int n)
    {
        int x = n;
        while (1)
        {

            x++;
            string str = to_string(x);
            unordered_map<int, int> record;
            for (const auto &c : str)
            {
                record[c - '0']++;
            }
            bool flag = 0;
            for (const auto it : record)
            {
                if (it.first != it.second)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                return stoi(str);
            }
        }
    }
};

int main()
{

    return 0;
}