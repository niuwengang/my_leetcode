#include <bits/stdc++.h>
using namespace std;

/*

深浅拷贝
*/

class demo
{
public:
    demo()
    {
        m_p = new int(10);
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
    demo d1;
    demo d2(d1);
    return 0;
}