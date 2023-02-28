#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    person()
    {
        m_name.clear();
        m_age = 0;
        cout << "调用了构造函数" << endl;
    }

    person(const person &p)//拷贝构造函数 
    {
    }

    ~person()
    {
        cout << "调用了析构函数" << endl;
    }

private:
    string m_name;
    int m_age;
};



int main()
{
    person p1;
    person p2(p1);
    person p3 = p2;
    return 0;
}