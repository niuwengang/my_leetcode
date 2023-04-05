#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    double *ptr =nullptr;
    
try
{
ptr = new double[1000000000000000];
}
catch(bad_alloc & e)
{
cout<<"分配内存失败"<<endl;
}


ptr = new (std::nothrow)double[1000000000000000];
    if (ptr != nullptr)
    {
        delete ptr;
    }

    return 0;
}