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
    string str;
    void dfs(TreeNode *head)
    {
        if (head == nullptr)
            return;
        if (head->left == nullptr && head->right == nullptr)
        {
            str += +'0' + head->val;
        }
        dfs(head->left);
        dfs(head->right);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {

        dfs(root1);
        string str1 = str;
        str.clear();
        dfs(root2);
        string str2 = str;
        return str1 == str2;
        return false;
    }
};

int main()
{
    Solution s;
    TreeNode *head1 = new TreeNode(1);
    head1->right = new TreeNode(2);
    head1->left = new TreeNode(3);

    TreeNode *head2 = new TreeNode(1);
    head2->right = new TreeNode(3);
    head2->left = new TreeNode(2);

    s.leafSimilar(head1, head2);
    return 0;
}