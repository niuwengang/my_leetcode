#include <bits/stdc++.h>
using namespace std;

/*
完全二叉树: 底部从左到右连续
满二叉树
二叉搜索树
平衡二叉搜索树:左子树和右子树 高度差为1 e.g set map  vs 哈希表 unorder_map unorder_set

二叉树 遍历
前中后序
*/

struct TreeNode
{
    int _val;
    TreeNode *_left;
    TreeNode *_right;
    TreeNode(int val) : _val(val), _right(nullptr), _left(nullptr)
    {
    }
};

int main()
{
    /*前序遍历 中左右*/
    /*中序遍历 左中右*/
    /*后序遍历 左右中*/
}