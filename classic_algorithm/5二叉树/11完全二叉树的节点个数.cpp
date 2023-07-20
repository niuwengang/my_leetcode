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
    int countNodes(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        deque<TreeNode *> q;
        q.push_back(root);
        int sum = 0;
        while (!q.empty())
        {
            int len = q.size();
            while (len--)
            {

                TreeNode *main_node = q.front();
                q.pop_front();
                sum++;
                if (main_node->left != nullptr)
                {
                    q.push_back(main_node->left);
                }
                if (main_node->right != nullptr)
                {
                    q.push_back(main_node->right);
                }
            }
        }
        return sum;
    }
};
int main()
{
    return 0;
}