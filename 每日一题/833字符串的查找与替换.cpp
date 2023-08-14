#include "bits/stdc++.h"
using namespace std;
class Solution
{
  public:
    string findReplaceString(string s, vector<int> &indices, vector<string> &sources, vector<string> &targets)
    {
        for (int i = 0; i < sources.size(); i++)
        {
            string temp = sources[i];
            if (s.substr(indices[i], temp.size()) == temp) // 需要替换
            {
                s.erase(s.begin() + indices[i], s.begin() + indices[i] + temp.size());
                s.insert(indices[i] , targets[i]);

                for (int j = i + 1; j < sources.size(); j++)
                {
                    if (indices[i] < indices[j])
                    {
                        indices[j] += targets[i].size() - temp.size();
                    }
                }
            }
        }
        return s;
    }
};

int main()
{
    string s = "abcd";
    vector<int> indexes = {0, 2};
    vector<string> sources = {"a", "cd"};
    vector<string> targets = {"eee", "ffff"};
    Solution obj;
    obj.findReplaceString(s, indexes, sources, targets);

    return 0;
}