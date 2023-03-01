#include <bits/stdc++.h>
using namespace std;

/*
同一个进程的多个线程共享进程的栈空间 但每个子线程在该栈中拥有自己似有的栈空间
join()函数等待子线程退出
detach()函数分离子线程 分离后不可join
joinable 判断子线程的分离状态
*/

void func(const int num, const string str)
{
    cout << "编号:" << num << endl;
    cout << "输出:" << str << endl;
}

int main()
{
    std::thread t1(func, 1, "1");
    std::thread t2(func, 2, "2");
    // t1.detach();
    // t2.detach();
      t1.join();
       t2.join();
    return 0;
}