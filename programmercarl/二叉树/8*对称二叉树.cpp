#include <algorithm>
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
    bool isSymmetric(TreeNode *root)
    {
        queue<TreeNode *> q;

        if (root)
            q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            vector<int> vec;

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                vec.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                else if (node->val != 0)
                    q.push(new TreeNode(0));
                if (node->right)
                    q.push(node->right);
                else if (node->val != 0)
                    q.push(new TreeNode(0));
            }

            vector<int> vec1;
            vec1.assign(vec.begin(), vec.end());
            reverse(vec.begin(), vec.end());

            if (vec != vec1)
                return false;
        }

        return true;
    }
};
int main()
{
}