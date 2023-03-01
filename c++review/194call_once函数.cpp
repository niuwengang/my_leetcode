#include <bits/stdc++.h>
using namespace std;

/*
使用call once保证只调用一次
*/


once_flag onceflag;

void once_func()
{
    cout << "only once" << endl;
}

void func(const string &str)
{
    call_once(onceflag, once_func);
    this_thread::sleep_for(chrono::seconds(1));
    cout << "say: " << str << endl;
}

int main()
{
    thread t1(func, "1");
    thread t2(func, "2");
    t1.join();
    t2.join();
    return 0;
}