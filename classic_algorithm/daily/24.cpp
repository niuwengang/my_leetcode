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
    ListNode *swapPairs(ListNode *head)
    {
        auto dummy = new ListNode(0, head);
        auto node0 = dummy;
        auto node1 = head;

        while (node1 != nullptr && node1->next != nullptr)//swap is node1 and node2
        {
            auto node2 = node1->next;
            auto node3 = node2->next;

            node0->next=node2;
            node2->next=node1;
            node1->next=node3;

            node0=node1;
            node1=node3;

        }
        return dummy->next;
    }
};