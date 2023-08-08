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
    ListNode *reverseList(ListNode *head)
    {
        if (head = nullptr)
            return head;
        // 双指针
        ListNode *forward_point = head;
        ListNode *backward_point = nullptr;
        while (forward_point != nullptr)
        {
            ListNode *temp = new ListNode(forward_point->val, backward_point);
            backward_point = temp;
            forward_point = forward_point->next;
        }
    }
};

int main()
{

    return 0;
}
