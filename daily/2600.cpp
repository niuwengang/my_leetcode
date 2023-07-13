#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
    vector<int>record;
    vector<int>t1(numOnes,1);
    vector<int> t2(numZeros, 0);
    vector<int> t3(numNegOnes, -1);
    record.insert(record.end(),t1.begin(),t1.end());
    record.insert(record.end(), t2.begin(), t2.end());
    record.insert(record.end(), t3.begin(), t3.end());
    return accumulate(record.begin(),record.begin()+k,0);
    }
};

int main()
{

}