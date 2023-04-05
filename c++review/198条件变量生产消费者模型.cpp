#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>//条件变量
#include <queue>

/*
生产消费者模型
*/

class AA
{
    std::mutex m_metux;                              // 互斥锁
    std::condition_variable m_record;                // 条件变量
    std::queue<std::string, deque<std::string>> m_q; // 缓存队列
public:
    void incache(int num) // 生产数据 num指定数据的个数
    {
        std::lock_guard<std::mutex> locak(m_metux); // 申请加锁

    }
};

int main()
{
}