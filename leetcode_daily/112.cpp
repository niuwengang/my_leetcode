#include "bits/stdc++.h"
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
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == nullptr)
        {
            return root;
        }
        else
        {
            path.push_back(root->val);
            PreOrder(root);
        }

        for (const auto &it : output)
        {
            int sum = accumulate(it.begin(), it.end(), 0);
            if(sum==targetSum)
            return true;
        }
        return false;
    }

    void PreOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        // 中
        if (root->left == nullptr && root->right == nullptr)
        {
            output.push_back(path);
        }
        // 左
        if (root->left != nullptr)
        {
            path.push_back(root->left->val);
            PreOrder(root->left);
            path.pop_back();
        }
        // 右
        if (root->right != nullptr)
        {
            path.push_back(root->right->val);
            PreOrder(root->right);
            path.pop_back();
        }
    }

    vector<vector<int>> output;
    vector<int> path;
};

int main()
{
    cout << "this is a demo " << endl;
}