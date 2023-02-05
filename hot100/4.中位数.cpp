#include <bits/stdc++.h>
using namespace std;

//1.暴力 o(nlog(n))
class Solution1
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> num;
        num.insert(num.end(), nums1.begin(), nums1.end());
        num.insert(num.end(), nums2.begin(), nums2.end());

        sort(num.begin(), num.end(), [](int a, int b)
             { return a < b; });
        if (num.size() % 2 == 0) // 偶数
        {
            return (double)(num[num.size() / 2] + num[num.size() / 2 - 1]) / 2.0f;
        }
        else // 奇数
        {
            return (double)num[num.size() / 2];
        }
    }
};

int main()
{
    vector<int>a{1,3};
    vector<int> b{2};
    Solution1 s;
    s.findMedianSortedArrays(a,b);
    return 0;
}