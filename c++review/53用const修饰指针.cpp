
#include <bits/stdc++.h>
using namespace std;
/*
常量指针:指针指向的值不可以通过解引用的方式改变
*/

int main()
{
    const int *p = nullptr;
    int a = 10;
    p = &a;
    cout<<*p<<endl;
    // *p=20; //错误
    // cout<<*p<<endl;
    return 0;
}