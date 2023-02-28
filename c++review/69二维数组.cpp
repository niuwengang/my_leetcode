#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int y[6];
    //    int x[2][3]={1,2,3,4,5,6};
    //   int x[][3]={1,2,3,4,5,6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << (long)&x[i][j] << " ";
        }
        cout << endl;
    }

    memset(x, 0, sizeof(x));//赋值
    int *p = (int *)x;

    for (int i = 0; i < 6; i++)
    {
        cout << *(p + i) << endl;
    }

    memcpy(y, x, sizeof(x));//拷贝

        int *p2 = (int *)y;

    for (int i = 0; i < 6; i++)
    {
        cout << *(p + i) << endl;
    }

    return 0;
}