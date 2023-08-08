#include <bits/stdc++.h>
#include <execution>
using namespace std;

class Solution
{
  public:
    int numJewelsInStones(string jewels, string stones)
    {
        int count = 0;
        set<char> table;
        for_each(jewels.begin(), jewels.end(), [&](const char &it) { table.insert(it); });
        for_each(stones.begin(), stones.end(), [&](const char &it) {
            if (table.find(it) != table.end())
                count++;
        });

        return count;
    }
};

int main()
{

    Solution s;
}