
#include <bits/stdc++.h>
using namespace std;


/*
规避野指针
函数不要返回局部变量的地址 
*/
int *func()
{
    int a = 3;
    return &a;//超出作用域
}

int main()
{
    int *p = func();
    cout << *p << endl;

    return 0;
}