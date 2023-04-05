#include <bits/stdc++.h>
using namespace std;

/*

*/

class person
{
public:
    string m_name;    // 姓名
     int m_age; // 年龄
     person(){}
    person(const string &name, int age)
    {
        m_name = name;
        m_age = age;
    };

    void show() { cout << "姓名" << m_name << endl; }
     void showage()
    {
        cout << "年龄" << m_age << endl;
    }

    void showname()
    {
        cout << "姓名" << m_age << endl;
    }
};

int main()
{
    person p;
    cout<<sizeof(p)<<endl;
    return 0;
}