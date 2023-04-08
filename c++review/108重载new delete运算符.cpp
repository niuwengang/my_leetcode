#include <bits/stdc++.h>
using namespace std;

void *operator new(size_t size)
{
    cout << "调用了重载的new" << endl;
    void *ptr = malloc(size);
    cout << "申请到的内存地址是:" << ptr << endl;
    return ptr;
}

void operator delete(void *ptr)
{
    cout << "调用了重载的delete" << endl;
    if (ptr == 0)return ;
    free(ptr);
}

int main()
{
    int *p = new int(3);
    cout << "p= " << (void *)p << *p << endl;
    delete p;
    return 0;
}