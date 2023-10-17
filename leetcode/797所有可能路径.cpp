#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        _path.push_back(0);
        dfs(graph, 0);
        return _paths;
    }
    void dfs(const vector<vector<int>> &graph, const int cur_index)
    {

        // 1--终止条件
        if (cur_index == graph.size() - 1)
        {
            _paths.push_back(_path);
            return;
        }
        // 2--递归循环
        for (int i = 0; i < graph[cur_index].size(); i++)
        {
            _path.push_back(graph[cur_index][i]);
            dfs(graph, graph[cur_index][i]);
            _path.pop_back();
        }
    }
    vector<int> _path;
    vector<vector<int>> _paths;
};

int main()
{
    Solution s;

    // s.allPathsSourceTarget();
    return 0;
}