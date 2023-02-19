#include <bits/stdc++.h>
using namespace std;

/*
动态分配出来的内存无变量名，只能通过指向它的指针来操作内存中的数据
程序退出，系统自动回收
*/

int main()
{
    int *p = new int(100);
    cout << *p << endl;
    delete p;
    
    return 0;
}