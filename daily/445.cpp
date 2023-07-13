#include "bits/stdc++.h"
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr)
    {
    }
    ListNode(int x) : val(x), next(nullptr)
    {
    }
    ListNode(int x, ListNode *next) : val(x), next(next)
    {
    }
};
class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<int> first_line, second_line;
        ListNode *first_root = l1, *second_root = l2;
        while (first_root != nullptr || second_root != nullptr)
        {
            if (first_root != nullptr)
            {
                first_line.push(first_root->val);
                first_root = first_root->next;
            }

            if (second_root != nullptr)
            {
                second_line.push(second_root->val);
                second_root = second_root->next;
            }
        }
        int carry = 0, sum = 0;
        ListNode *temp_node = nullptr;

        while (!first_line.empty() || !second_line.empty())
        {
            if (first_line.empty() && !second_line.empty())
            {
                sum = 0 + second_line.top() + carry;
                second_line.pop();
            }
            else if (!first_line.empty() && second_line.empty())
            {
                sum = first_line.top() + 0 + carry;
                first_line.pop();
            }
            else if (!first_line.empty() && !second_line.empty())
            {
                sum = first_line.top() + second_line.top();
                cout << first_line.top() << endl;
                cout << second_line.top() << endl;
                second_line.pop();
                first_line.pop();
            }
            else
            {
            }

            carry = sum / 10;
            temp_node = new ListNode(sum - carry * 10, temp_node);
        }
        if (carry >= 1)
        {
            temp_node = new ListNode(carry, temp_node);
        }
        return temp_node;
    }
};

ListNode *generateLink(const vector<int> &vec)
{
    ListNode *root = new ListNode(0);
    ListNode *temp = root;

    for (auto it = vec.cbegin(); it != vec.end(); it++)
    {
        temp->next = new ListNode(*it, nullptr);
        temp = temp->next;
    }

    return root->next;
}

int main(int argc, char **argv)
{
    vector<int> l1_vec{9};
    vector<int> l2_vec{9};
    auto l1 = generateLink(l1_vec);
    auto l2 = generateLink(l2_vec);
    Solution s;
    s.addTwoNumbers(l1, l2);
    return 0;
}
