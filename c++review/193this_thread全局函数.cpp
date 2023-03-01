#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

std::mutex mtx; // 保护counter

void func(const string str)
{
    mtx.lock();
    cout << "编号:" << str << endl;
    cout << endl;
    this_thread::sleep_for(chrono::seconds(1));//方便跨平台
    //sleep_until
    //yield cpu让出已抢占到的时间片
    mtx.unlock();
}

int main()
{
    std::thread t1(func, "t1");
    std::thread t2(func, "t2");
    // t1.detach();
    // t2.detach();
    cout << "子线程t1ID: " << t1.get_id() << endl;
    cout << "子线程t2ID: " << t2.get_id() << endl;
    t1.swap(t2);
    cout << "主线程序ID: " << this_thread::get_id() << endl;
    cout << "子线程t1ID: " << t1.get_id() << endl;
    cout << "子线程t2ID: " << t2.get_id() << endl;

    thread t3=move(t2);
    t1.join();
    t3.join();
    return 0;
}