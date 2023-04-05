#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    person( string name,int age,float score)
    {
        this->m_age = age;
        this->m_name = name;
        this->m_score = score;
    }

    person&  operator+(const int score)//返回引用作为右值
    {
        this->m_score += score;
        return *this;
    }
    int m_age;
    string m_name;
    float m_score;
};




int main()
{
    person p("zhang", 12,20);
    p+20+30;
    cout<<p.m_score<<endl;
    return 0;
}