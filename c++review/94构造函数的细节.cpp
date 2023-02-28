#include <bits/stdc++.h>
using namespace std;



class demo
{
    public:
    demo() { cout << "调用了构造函数"<<endl; }
    ~demo() { cout << "调用了析构函数"<<endl; }//不能重载
};

int main()
{
demo* d=new demo();//!!错误 demo d();会被认为是申明函数
//demo d1=demo(); //用匿名函数
delete d;
}