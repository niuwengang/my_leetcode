#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    int compress(vector<char> &chars)
    {
        int p1=0;p2=1;
        while (p2 < chars.size())
        {
            if(chars[p1]==chars[p2])
            {
                p2++;
                continue;
        
            }
            else
            {
                chars.push_back(chars[p1]);
                int num=p2-p1;
                if(num==1)

            }
        }
    }
};

int main()
{
    vector<char> c = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    Solution s;
    s.compress(c);
    return 0;
}