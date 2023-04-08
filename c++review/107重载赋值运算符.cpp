#include <bits/stdc++.h>
using namespace std;

class person
{

public:
    person()
    {
    }
    person(string str, int num, int addr_num) : _num(num), _str(str), _ptr(new int(addr_num))
    {
    }
    person &operator=(const person &p)
    {
        if (this == &p)
            return *this;
        this->_num = p._num;
        this->_str = p._str;
        if (this->_ptr == nullptr)
        {
            _ptr = new int(*p._ptr);
        }
        else
        {
            memcpy(this->_ptr, p._ptr, sizeof(int));
        }
    }
    ~person()
    {
        if (_ptr != nullptr)
        {
            delete _ptr;
            _ptr = nullptr;
        }
    }
    string _str;
    int _num;
    int *_ptr = nullptr;
};

int main()
{
    auto p1 = make_unique<person>("demo", 1, 10);
    auto p2 = make_unique<person>("demo2",2,11);
    *p2 = *p1;
    cout << p2->_num << " " << p2->_str << " " << *(p2->_ptr) << endl;
    return 0;
}