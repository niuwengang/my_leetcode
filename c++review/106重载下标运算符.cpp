#include <bits/stdc++.h>
using namespace std;

class person
{

public:
    string _school[3];
    string &operator[](int index)// 如果是常对象那么只能访问常函数
    {
        return _school[index];
    }
    void show()
    {
        for (auto it : _school)
        {
            cout << it << " ";
        }
        cout << endl;
    }
};

int main()
{
    auto p = make_unique<person>();

    (*p)[1] = "demo";

    p->show();
    return 0;
}