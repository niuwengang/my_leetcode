#include "bits/stdc++.h"
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};

class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {
        return method2(head);
    }
//快慢指针
    bool method1(ListNode *head)
    {
        ListNode *fptr = head, *sptr = head;
        do
        {
            if (fptr != nullptr && fptr->next != nullptr)
            {
                sptr = sptr->next;
                fptr = fptr->next->next;
            }
            else
            {
                return false;
            }

        } while (fptr != sptr);
        return true;
    }
    //地址哈希
    bool method2(ListNode *head)
    {
        ListNode *ptr = head;
        unordered_set<uint64_t> addr;
        while (ptr != nullptr)
        {
            if (addr.find((uint64_t)ptr) != addr.end())
            {
                return true;
            }
            addr.insert((uint64_t)ptr);
            ptr = ptr->next;
        }
        return false;
    }
};