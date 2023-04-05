#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

/*
线程同步:
互斥锁
条件变量
生产消费
*/

/*
c++11有4种互斥锁
*/

/*
lock_guard 采用RAII思想 类构造加锁 类析构释放
*/

int a = 0;
std::mutex m;
void func(int num)
{
    std::lock_guard<std::mutex> mlock(m);
    // m.lock();
    for (int i = 0; i < 50; i++)
    {
        a++;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    // m.unlock();
}

int main()
{
    thread t1(func, 1);
    thread t2(func, 2);
    thread t3(func, 3);

    t1.join();
    t2.join();
    t3.join();
    cout << a << endl;
    return 0;
}