#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//1.模拟 O(n)
class Solution1
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        vector<int> num1, num2;
        validNum(l1, num1);
        validNum(l2, num2);
        int len = max(num1.size(), num2.size());
        num1.resize(len, 0);
        num2.resize(len, 0);

        int carry = 0;
        vector<int> num;
        ListNode *res =new ListNode(0);
        ListNode *point = res;

        for (int i = 0; i < len; i++)
        {
            int cur = num1[i] + num2[i] + carry;
            carry = cur / 10;
            point->next = new ListNode(cur % 10);
            point = point->next;
        }
        if (carry >= 1)
        {
           point->next=new ListNode(carry);
        }
        return res->next;
    }

    inline void validNum(ListNode *l, vector<int> &num)
    {
        ListNode *point = l;
        int cnt = 0;
        while (point != nullptr) // num 左低右高
        {
            num.push_back(point->val);
            point = point->next;
        }
    }
};

int main()
{
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);

    ListNode *head2 = new ListNode(4);
    head2->next = new ListNode(5);
    head2->next->next = new ListNode(6);

    Solution s;
    s.addTwoNumbers(head1, head2);
    return 0;
}