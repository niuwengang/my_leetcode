#include <bits/stdc++.h>
using namespace std;

/*
类的成员函数后+const关键字 表示成员函数中保证不会修改调用对象的成员变量
成员const函数只能调用const函数 普通函数可以调用const
常对象只能访问常函数
*/

class demo
{
public:
    demo() {}
    void show() const
    {
        cout << a << endl;
        x = "123";
    }
    ~demo() {}

private:
    int a = 10;
    mutable string x = "abc";//突破const 限制
};

int main()
{
    return 0;
}