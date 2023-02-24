#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];                                // int 4字节
  int b[3];

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;

    //重置
    memset(a,0,sizeof(a));
        for(int i=0;i<sizeof(a)/sizeof(int);i++)
    {
        cout<<a[i]<<endl;
    }
    //复制
    memcpy(b,a,sizeof(a));
        for(int i=0;i<sizeof(a)/sizeof(int);i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}