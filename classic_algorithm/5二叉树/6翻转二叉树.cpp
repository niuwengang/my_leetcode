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
    TreeNode(int x, TreeNode *left, TreeNode*right) : val(x), left(left), right(right)
    {
    }
};

class Solution
{
  public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
            return root;

        deque<TreeNode *> q;
        q.push_back(root);
        while (!q.empty())
        {
            int len = q.size();
            vector<int> one_layer;
            while (len--)
            {
                TreeNode *cur_node = q.front();
                one_layer.push_back(cur_node->val);
                q.pop_front();

                TreeNode* temp_left_node=cur_node->left;
                TreeNode *temp_right_node = cur_node->right;
                cur_node->right = temp_left_node;
                cur_node->left=temp_right_node;

                    if (cur_node->left)
                {
                    q.push_back(cur_node->left);
                }
                if (cur_node->right)
                {
                    q.push_back(cur_node->right);
                }
            }
        
      
        }
        return root;
    }
};

int main()
{
}