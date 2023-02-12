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

// 1.set排序 o(n+m)
class Solution
{

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        auto cmp = [](int x, int y)
        { return x < y; };
        multiset<int, decltype(cmp)> table(cmp);

        ListNode *temp = nullptr;
        temp = list1;
        while (temp != nullptr)
        {
            table.insert(temp->val);
            temp = temp->next;
        }
        temp = list2;
        while (temp != nullptr)
        {
            table.insert(temp->val);
            temp = temp->next;
        }

        ListNode *head = new ListNode(0);
        temp = head;

        while (table.size() != 0)
        {
            temp->next = new ListNode(*table.begin());
            temp = temp->next;
            table.erase(table.begin());
        }
        return head->next;
    }
};

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    Solution s;
    s.mergeTwoLists(l1, l2);
    return 0;
}