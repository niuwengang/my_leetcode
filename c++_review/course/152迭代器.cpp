#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int val;
    Node *next;
};

int *find1(int *arr, int n, const int &val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
            return &arr[i];
    }
    return nullptr;
}

int *find2(int *begin, int *end, const int &val)
{
    for (int *iter = begin; iter != end; iter++)
    {
        if (*iter == val)
            return iter;
    }
    return nullptr;
}

Node *find3(Node *head, Node *end, const int &val)
{
    for (Node *iter = head; iter != end; iter = iter->next)
    {
        if (iter->val == val)
            return iter;
    }
    return nullptr;
}

template <typename T1, typename T2> T1 find4(T1 begin, T1 end, const T2 &val)
{
    for (T1 iter = begin; iter != end; iter++)
    {
        if (*iter == val)
            return iter;
    }
    return end;
}

int main()
{
    vector<int> v{1, 2, 3, 4};
    vector<int>::iterator it1 = find4(v.begin(), v.end(), 2);

    list<int> l{1, 2, 3, 4};
    list<int>::iterator it2 = find4(l.begin(), l.end(), 2);

    for (auto it =l.rbegin(); it != l.rend(); it++)
    {
;
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}