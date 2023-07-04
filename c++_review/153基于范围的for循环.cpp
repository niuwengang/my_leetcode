#include "bits/stdc++.h"
using namespace std;

class A
{

  public:
    string m_name;
    A()
    {
        cout << "默认构造函数A" << endl;
    }
    A(const string &name)
    {
        m_name = name;
        cout << "有参构造函数 name=" << m_name << endl;
    }
    A(const A &a) : m_name(a.m_name)
    {

        cout << "拷贝构造函数 name=" << m_name << endl;
    }
    A &operator=(const A &a)
    {
        m_name = a.m_name;
        cout << "赋值构造函数 name=" << m_name << endl;
    }
    ~A()
    {
        cout << "析构函数 name=" << m_name << endl;
    }
};

int main()
{
    /*
    【扩容】
    1.分配新的内存空间
    2. 构造新插入元素--构造
    3. 将旧元素拷贝至新内存--拷贝构造
    4. 释放原内存--析构
    */
    vector<A> vec;
    cout << "容器容量为 " << vec.capacity() << endl;
    vec.emplace_back("张三");
    cout << "容器容量为 " << vec.capacity() << endl;
    vec.emplace_back("李四");
    cout << "容器容量为 " << vec.capacity() << endl;
    vec.emplace_back("王五");
    cout << "容器容量为 " << vec.capacity() << endl;
    cout << "-------------------" << endl;
    for (const auto& it : vec)
    {
        cout << it.m_name << endl;
    }
    return 0;
}