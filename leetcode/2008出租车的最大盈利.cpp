#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    long long maxTaxiEarnings(int n, vector<vector<int>> &rides)
    {
        sort(rides.begin(), rides.end(), [](const vector<int> a, const vector<int> b) { return a[1] < b[2]; });
    }
};

int main()
{
    return 0;
}