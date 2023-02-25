#include <bits/stdc++.h>
using namespace std;


int cmp(const void*p1,const void*p2)
{
    if(*(int *)p1>*((int*)p2))return -1;
}

int main()
{
    int a[5]={1,4,2,6,8};
    qsort(a,sizeof(a)/sizeof(int),sizeof(int),cmp);
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<endl;
    }
}