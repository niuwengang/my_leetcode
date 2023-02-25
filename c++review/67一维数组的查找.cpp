#include <bits/stdc++.h>
using namespace std;

/*
二分法
*/

int main()
{
    int low = 0;
    int high = sizeof(a) / sizeof(int) - 1;
    int a[] = {1, 3, 4, 5, 7, 9};
    const int target = 4;
    int mid =0;
    while (low < high)
    {
        int mid = (low + high) >>1;
        if (a[mid] == target)
        {
           break;
        }
        else if (a[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
}