#include <bits/stdc++.h>
using namespace std;

/*
void * 指向任意类型，但是不能解引用
*/

void func(string var_name, void *p)
{
    cout << p << endl;
        cout << *p << endl;
}

int main()
{
    int a;
    char b;
    // memset()
    cout << "a的地址是:" << &a << endl;
    cout << "b的地址是:" << &b << endl;

    func("a", &a);
    func("b", &b); // 不需要强制转换 只关心形式  不关心内存大小

    return 0;
}