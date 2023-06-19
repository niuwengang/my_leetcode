#include <functional>
#include <iostream>

class ImuData
{
  public:
    void show()
    {
        std::cout << " imu data is loading " << std::endl;
    }
};

class GnssData
{
  public:
    void show()
    {
        std::cout << " gnss data is loading " << std::endl;
    }
};

class HandleData
{
  public:
    std::function<void()> _imu_process;
    HandleData(std::function<void()> imu_process) : _imu_process(imu_process)
    {
    }
    void Run()
    {
        _imu_process();
    }
};

int main()
{
    ImuData imu_data;
    HandleData handle_data1([&imu_data]() { imu_data.show(); });
    handle_data1.Run();
    GnssData gnss_data;
    HandleData handle_data2([&gnss_data]() { gnss_data.show(); });
    handle_data2.Run();
    return 0;
}