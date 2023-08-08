#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string addStrings(string num1, string num2)
    {
        string str_res;
        int cnt1 = num1.size() - 1;
        int cnt2 = num2.size() - 1;
        int carry = 0;
        while (cnt1 >= 0 || cnt2 >= 0)
        {
            int sum =0;
             if (cnt1 >= 0 && cnt2 >= 0)
            {
            sum=num1[cnt1] - '0' + num2[cnt2] - '0' + carry;
            }
            else if (cnt1 >= 0|| cnt2 < 0)
            {
            sum = num1[cnt1] - '0' + 0 + carry;
            }
            else if (cnt1 < 0 && cnt2 >= 0)
            {
            sum = 0 + num2[cnt2] - '0' + carry;
            }
            else 
            {
                break;
            }

            carry = sum / 10;
            str_res.push_back(sum % 10 + '0');

            cnt2--;
            cnt1--;
        }
        if(carry!=0)
        {
            str_res.push_back(carry+'0');
        }
        reverse(str_res.begin(), str_res.end());
        return str_res;
    }
};

int main()
{
    Solution s;
    s.addStrings("1", "9");
    return 0;
}