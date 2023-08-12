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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        auto cmp = [](ListNode *A, ListNode *B) { return A->val > B->val; };//大的放下面
        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> q(cmp);
        for (const auto &node : lists)
        {
            if(node!=nullptr)
            {
                q.push(node);
            }

        }
        ListNode *head=new ListNode(0);
        ListNode *tail=head;

        while (!q.empty())
        {
          ListNode *temp=q.top();
          q.pop();
          tail->next=new ListNode(temp->val);
          tail = tail->next;
          if(temp->next!=nullptr)
          {
              q.push(temp->next);
          }
        }
        return head->next;
        
    }
};

int main()
{
}
