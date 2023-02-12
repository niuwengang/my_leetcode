#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//1.快慢指针
class Solution1
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // 1.空或一个节点
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        // 2.2个以上的节点

        ListNode *dummy_node = new ListNode(0, head);
        ListNode *s_p = dummy_node;
        ListNode *f_p = head;

        while (n--)
        {
            f_p = f_p->next;
        }
        while (f_p!=nullptr)
        {
            f_p = f_p->next;
            s_p = s_p->next;
        }
            s_p->next=s_p->next->next;
        return dummy_node->next;
    }
};


//2.栈


int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    // l1->next->next = new ListNode(4);
    // l1->next->next->next = new ListNode(6);

    Solution1 s;
    s.removeNthFromEnd(l1, 1);
    return 0;
}