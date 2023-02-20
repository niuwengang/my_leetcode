#include <bits/stdc++.h>
using namespace std;

/*
修改指针的地址
*/

void func(int **pp)
{
    *pp = new int(10);
}
int main()
{
    int a = 10;
    int *p = &a;

    cout << p << endl; // 0x7fffffffdb2c
    func(&p);
    cout << p << endl; // 0x555555614280
    delete p;
    return 0;
}
