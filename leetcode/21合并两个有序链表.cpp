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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *head = dummy;
        ListNode *head1 = list1;
        ListNode *head2 = list2;
        while (head1 == nullptr && head2 == nullptr)
        {
            if (head1 != nullptr && head2 != nullptr)
            {
                if (head1->val <= head2->val)
                {
                    head->next = new ListNode(head1->val);
                    head1 = head1->next;
                    head = head->next;
                }
                else
                {
                    head->next = new ListNode(head2->val);
                    head2 = head2->next;
                    head = head->next;
                }
            }

            else if (head1 != nullptr)
            {
                head->next = new ListNode(head1->val);
                head1 = head1->next;
                head=head->next;
            }
            else if (head2 != nullptr)
            {
                head->next = new ListNode(head2->val);
                head2 = head2->next;
                head = head->next;
            }
            else
            {
            }
        }
        return dummy->next;
    }
};

int main()
{
    ListNode *l1=new ListNode(1);
    l1->next=new ListNode(2);
    l1->next->next=new ListNode(4);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    shared_ptr<Solution> solve_ptr = std::make_shared<Solution>();
    solve_ptr->mergeTwoLists(l1,l2);

    return 0;
}