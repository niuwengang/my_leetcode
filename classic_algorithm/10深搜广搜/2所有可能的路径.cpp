#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<vector<int>> ans;
    int n;
    void dfs(vector<vector<int>> &graph, vector<int> &path, int i)
    {
        if (i == n - 1)
        {
            return ans.push_back(path);
        }
        for (auto &next : graph[i])
        {
            path.push_back(next);
            dfs(graph, path, next);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        n = graph.size();
        vector<int> path{0};
        dfs(graph, path, 0);
        return ans;
    }
};

int main()
{
    vector<vector<int>> rela{{1, 2}, {3}, {3}, {}};
    Solution s;
    s.allPathsSourceTarget(rela);
    return 0;
}