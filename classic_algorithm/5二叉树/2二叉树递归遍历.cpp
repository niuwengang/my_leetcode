#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr)
    {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
    {
    }
};

class Solution
{
  public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return {};
        vector<int> res;
        recursion(res, root);
        return res;
    }
    void recursion(vector<int> &vec, TreeNode *cur_node)
    {
        if (cur_node == nullptr)
            return;
        vec.push_back(cur_node->val);
        recursion(vec, cur_node->left);
        recursion(vec, cur_node->right);
    }
};

int main()
{
    return 0;
}