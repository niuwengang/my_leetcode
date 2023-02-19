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

// 1.暴力
class Solution1
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<int, vector<int>, greater<int>> q;
        const int len = lists.size();
        for (int i = 0; i < len; i++)
        {
            insert(lists[i], q);
        }
        ListNode *res = new ListNode(0);
        ListNode *curr = res;

        while (q.size() != 0)
        {
            curr->next = new ListNode(q.top());
            curr = curr->next;
            q.pop();
        }
        return res->next;
    }

    inline void insert(ListNode *list, priority_queue<int, vector<int>, greater<int>> &q)
    {
        ListNode *temp = list;
        while (temp != nullptr)
        {
            q.emplace(temp->val);
            temp = temp->next;
        }
    }
};

int main()
{
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(4);
    head1->next->next = new ListNode(5);

    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode *head3 = new ListNode(2);
    head3->next = new ListNode(6);

    vector<ListNode *> in({head1, head2, head3});
    Solution1 s;
    s.mergeKLists(in);

    return 0;
}