#include <bits/stdc++.h>
using namespace std;

// 1.小技巧
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
set<int> record;
for(auto &it:nums) {if(it!=0)record.insert(it);}
return record.size();
    }
};

int main()
{

    return 0;
}