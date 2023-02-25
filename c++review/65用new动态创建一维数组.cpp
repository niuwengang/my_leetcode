#include <bits/stdc++.h>
using namespace std;

/*
动态创建的数组无数组名 
*/

int main()
{

    int *arr = new int[8];
    for (int i = 0; i < 8; i++)
    {
        arr[i]=rand()%20;
        cout<<*(arr+i)<<endl;
    }
    delete []arr;

    int *a=new (std::nothrow)int[1000000000];
    if(a==nullptr)
    {
        cout<<"内存分配失败"<<endl;
    }
    return 0;
}