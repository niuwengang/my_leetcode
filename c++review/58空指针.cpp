#include <bits/stdc++.h>
using namespace std;


/*
为了健壮性 需要检查空指针
*/
void func(int *p)
{
    if(p==nullptr)return ;
    cout << *p << endl;
}

int main()
{
    int *p = new int(10);
    func(p);

    delete p;
    return 0;
}