#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        _path.push_back(0);
        dfs(graph, 0);
        return _all_path;
    }
    void dfs(vector<vector<int>> &graph, const int index)
    {
        // 1--终止条件
        if (graph.size() - 1 == index)
        {
            _all_path.push_back(_path);
            return;
        }
        // 2--迭代
        for (int i = 0; i < graph[index].size(); i++)
        {
            _path.push_back(graph[index][i]);
            dfs(graph, graph[index][i]);
            _path.pop_back();
        }
    }
    vector<vector<int>> _all_path;
    vector<int> _path;
};

int main()
{
    Solution s;
    s.allPathsSourceTarget();
    return 0;
}