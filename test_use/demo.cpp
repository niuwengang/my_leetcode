#include <bits/stdc++.h>
using namespace std;

int k = 3;
void func(int *s)
{
   s = &k;
    *s = 7;

}

int main()
{
    int m = 5;
    func(&m);
    return 0;
}