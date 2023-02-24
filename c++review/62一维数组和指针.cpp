#include <bits/stdc++.h>
using namespace std;

/*
数组本质还是指针
*/

int main()
{
    char a;   // 1
    short b;  // 2
    int c;    // 4
    double d; // 8

    int e[5] = {1, 2, 3, 4, 5}; // a等价于&a等价于&a[0]
    cout<<"[1]"<<endl;
    cout << (long long)e << endl;
    cout << (long long)&e << endl;
    cout << (long long)&e[0] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "元素" << i << "的地址是" << (long long)&e[i] << endl;
          cout << "元素" << i << "的地址是" << (long long)(e+i) << endl;
           cout << "元素" << i << "的数值是" << *(e+i) << endl;
    }

    return 0;
}