#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string m_name;
    string m_tel;

    person() {}
    void setName(const string name) { m_name = name; }
    void setTel(const string tel) { m_tel = tel; }
};

class student : person
{
public:
    int m_index;
    student() { m_name = "小张"; }
    void show() { cout << "学号:" << m_index << " 名字:" << m_name; }
};

int main()
{
    auto p = make_unique<student>();
    p->show();
    return 0;
}