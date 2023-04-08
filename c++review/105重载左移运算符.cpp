#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    person(string name, int age, float score)
    {
        this->m_age = age;
        this->m_name = name;
        this->m_score = score;
    }

    person &operator+(const int score) // 返回引用作为右值
    {
        this->m_score += score;
        return *this;
    }

    bool operator==(const person &p)
    {
        return this->m_score == p.m_score;
    }

    bool operator>(const person &p)
    {
        return this->m_score > p.m_score;
    }

    bool operator<(const person &p)
    {
        return this->m_score < p.m_score;
    }

    int m_age;
    string m_name;
    float m_score;
};

ostream &operator<<(ostream &cout, person &p)
{
    cout << p.m_score;
    return cout;
}

int main()
{
    std::unique_ptr<person> person_ptr1 = make_unique<person>("zhangsan", 22, 99);
    std::unique_ptr<person> person_ptr2 = make_unique<person>("lisi", 23, 100);
    cout << (*person_ptr1 > *person_ptr2) << endl;
    cout << *person_ptr1;
    return 0;
}