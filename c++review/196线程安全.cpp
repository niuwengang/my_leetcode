#include <bits/stdc++.h>
#include <thread>
using namespace std;

/*
同一进程中的多个线程共享该进程中全部的系统资源
多个线程操作共享变量时 会将内存加载至cpu缓存中，修改变量后,cpu会更新缓存，但不会立即写入内存
如果此时其他线程访问则读到的是旧值
*/

/*
非原子操作
i++ 内存取值-->i+1-->写回内存
*/


  int a=0;

void func(int num)
{

    for(int i=0;i<50;i++)
    {    
        a++;
        this_thread::sleep_for(chrono::milliseconds(10));
    }


}

int main()
{
    thread t1(func,1);
    thread t2(func,2);
    thread t3(func,3);

    t1.join();
    t2.join();
    t3.join();
            cout<<a<<endl;
    return 0;
}