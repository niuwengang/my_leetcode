#include <bits/stdc++.h>
using namespace std;

/*
数组[下标]解释为*(地址+下标)
*/

int a[5] = {1, 2, 3, 4, 5};



void func(int *arr, int len)
{
}

void func(int *arr)
{
   cout << sizeof(arr) << endl;//解释为指针
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << sizeof(a) << endl;//解释为数组
    func(a);
    return 0;
}