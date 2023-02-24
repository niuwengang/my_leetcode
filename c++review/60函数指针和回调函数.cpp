#include <bits/stdc++.h>
using namespace std;

/*
函数指针
拿函数名当参数
*/

void fast(int a)
{
    cout << "高速流程" << endl;
}

void slow(int a)
{
    cout << "低速流程" << endl;
}

void show(void (*pf)(int a))
{
    cout << "流程开始" << endl;
    int b=3;
    pf(b);
    cout << "流程结束" << endl;
}

int main()
{
    show(slow);
    return 0;
}