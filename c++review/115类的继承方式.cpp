#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int m_a = 1;
    void func()
    {
        cout << m_b << endl;
    }

protected:
    int m_b = 2;

private:
    int m_c = 3;
};

class B : public A
{
public:
    using A::m_a;
};

int main()
{
    auto p = make_unique<A>();
    p->func();
    cout<<p->m_a;
    // return 0;
}