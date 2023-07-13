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
    TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
    {
    }
};

class Solution
{
  public:
    // 层序遍历
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        deque<TreeNode *> q;
        q.push_back(root);
        int depth = 0;

        while (!q.empty())
        {
            int len = q.size();
            depth++;
            while (len--)
            {
                TreeNode *cur_node = q.front();

                q.pop_front();
                if (cur_node->left != nullptr)
                {
                    q.push_back(cur_node->left);
                }
                if (cur_node->right != nullptr)
                {
                    q.push_back(cur_node->right);
                }
                if (cur_node->right == nullptr && cur_node->left == nullptr)
                {
                    return depth;
                }
            }
        }
        return depth;
    }
};
