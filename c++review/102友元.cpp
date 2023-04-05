#include <bits/stdc++.h>

/*
友元全局函数
友元类

*/
class person;

class company
{

public:
    company() {}
    void func(const person &p);
};

class person
{
    friend void func(std::unique_ptr<person> &ptr);
    friend class company;
    friend void company::func(const person &p);

public:
    person()
    {
    }
    person(int age, std::string name) : _age(age), _name(name) {}

private:
    int _age;
    std::string _name;
};

void company::func(const person &p)
{
    std::cout << p._name << std::endl;
}

void func(std::unique_ptr<person> &ptr)
{
    std::cout << ptr->_age;
}

int main()
{
    auto person_ptr = std::make_unique<person>(11, "xiaoming");
    auto company_ptr = std::make_unique<company>();
    company_ptr->func(*person_ptr);
    func(person_ptr);

    return 0;
}
