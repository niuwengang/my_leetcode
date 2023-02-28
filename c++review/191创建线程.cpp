
/*
c++11 增加了线程序及线程相关的类
*/
#include <unistd.h>
#include <bits/stdc++.h>
#include <thread>
using namespace std;

// 1.普通函数
void func(const string &str)
{

    cout << "任务开始" << endl;

    for (int i = 0; i < 10; i++)
    {
        usleep(100 * 1000);
        cout << str << endl;
    }

    cout << "任务结束" << endl;
}

// 2.lambda函数
auto f = [](const string &str)
{ cout << "任务开始" << endl;

    for (int i = 0; i < 10; i++)
    {
        usleep(100 * 1000);
        cout << str << endl;
    }

    cout << "任务结束" << endl; };

// 3.仿函数
class demo
{
public:
    void operator()(const string &str)
    {
        cout << "任务开始" << endl;

        for (int i = 0; i < 10; i++)
        {
            usleep(100 * 1000);
            cout << str << endl;
        }

        cout << "任务结束" << endl;
    }
};

// 4.静态成员函数
class test
{
public:
    static void f(const string &str)
    {

        cout << "任务开始" << endl;

        for (int i = 0; i < 10; i++)
        {
            usleep(100 * 1000);
            cout << str << endl;
        }

        cout << "任务结束" << endl;
    }
};

// 5.普通类成员
class example
{
public:
    void f(const string &str)
    {

        cout << "任务开始" << endl;

        for (int i = 0; i < 10; i++)
        {
            usleep(100 * 1000);
            cout << str << endl;
        }

        cout << "任务结束" << endl;
    }
};

int main()
{
    example e;
    std::thread t1(func, "1");
    std::thread t2(demo(), "2");
    std::thread t3(f, "3");
    std::thread t4(test::f, "4");
    std::thread t5(&example::f,&e,"5");//成员函数的地址  + this 指针

    t1.join(); // 回收线程
    t2.join();
    t3.join();
    t4.join();
    t5.join();
}