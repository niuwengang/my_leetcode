#include <bits/stdc++.h>
using namespace std;

/*
静态成员变量    类内申明 类外初始化
静态成员函数    没有this指针  只能访问静态成员
*/

class person
{
public:
    string m_name;    // 姓名
    static int m_age; // 年龄
    person(const string &name, int age)
    {
        m_name = name;
        m_age = age;
    };

    void show() { cout << "姓名" << m_name << endl; }
    static void showage()
    {
        cout << "年龄" << m_age << endl;
    }

    void showname()
    {
        cout << "姓名" << m_age << endl;
    }
};

int person::m_age = 0;

int main()
{
    person p("张三", 18);
    p.showname();
    p.showage();
    person::showage();
    return 0;
}