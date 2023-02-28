#include <bits/stdc++.h>
using namespace std;


/*

初始化列表实际是调用了类的拷贝构造
赋值是先创建对象再赋值
*/

class demo
{
public:
    demo():m_p ( new int(10))
    {
        
    }
    demo(const demo &obj)
    {
        m_p = new int(*obj.m_p);
    }

    ~demo()
    {
        cout << "地址" << m_p << endl;
        delete m_p;
        m_p = nullptr;
    }
    int *m_p = nullptr;
};

int main()
{
    return 0;
}
