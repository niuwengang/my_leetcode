#include <iostream>
#include <thread>
#include <pthread.h> //linux原生线库

void func()
{
    int cnt=1;
    while (1)
    {
        std::this_thread::sleep_for(std::chrono::seconds(2)); // 休眠1s
        std::cout << "线程执行中"<<cnt++ << std::endl;
    }
}

int main()
{
    std::thread t(func);
    pthread_t orgin = t.native_handle();                   // 获取linux原生系统的线程句柄
    std::this_thread::sleep_for(std::chrono::seconds(20)); // 休眠1s
    pthread_cancel(orgin);
    std::cout << "线程被取消" << std::endl;
    t.join();
    return 0;
}