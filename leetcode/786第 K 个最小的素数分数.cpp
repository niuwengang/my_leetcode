#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:

    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
    {
        typedef tuple<float, int, int>  node;
        auto cmp = [](node tu1, node tu2) { return get<0>(tu1) > get<0>(tu2); };
        priority_queue<node, vector < node>,decltype(cmp)> q(cmp);
        const int len=arr.size();
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                q.push(node (float(arr[i]) / float(arr[j]),arr[i],arr[j] ));
            }
        }
        while(k!=1)
        {
            k--;
            q.pop();
        }
        return {
            get<1> (q.top()), get<2> (q.top())
        };
    }
};

int main()
{
    vector<int> in{1, 2, 3, 5};
    Solution S;
    S.kthSmallestPrimeFraction(in,3);
    return 0;
}