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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == nullptr)
            return {};
        deque<TreeNode *> q;
        q.push_back(root);
        vector<vector<int>> res;

        while (!q.empty())
        {
            int len = q.size();
            vector<int> temp;
            while (len--)
            {
                TreeNode *cur_node = q.front();
                temp.push_back(cur_node->val);
                q.pop_front();
                if (cur_node->left != nullptr)
                    q.push_back(cur_node->left);
                if (cur_node->right != nullptr)
                    q.push_back(cur_node->right);
            }

           res.push_back(temp);
        }
        return res;
    }
};



int main()
{
    TreeNode *root = new TreeNode();
    root->val = 1;

    root->left = new TreeNode();
    root->left->val = 2;

    root->right = new TreeNode();
    root->right->val = 3;
    return 0;
}
