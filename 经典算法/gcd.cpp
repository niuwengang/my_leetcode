#include "bits/stdc++.h"
using namespace std;


/*辗转相除法*/
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    cout << gcd(6, 10);
    return 0;
}