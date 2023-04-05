#include <bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
       int a=1;
       if(a==1)  throw "抛出";

       cout<<"tag1--"<<endl;
    }
    catch(...)
    {
        cout<<"捕获到异常"<<endl;
    }
            cout<<"程序运行"<<endl;
}