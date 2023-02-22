#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> res(digits.size() + 1);
        const int len = digits.size();
        int sub=0;
        for(int index=len-1;index>=0;index--)
        {
            int temp=digits[index]+sub;
            sub=temp/10;
            res[index+1]=temp%10;

        }
    }
};

int main()
{
    Solution s;
    vector<int> in{9,9,9,9};
    s.plusOne(in);
    return 0;
}