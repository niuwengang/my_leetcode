#include <bits/stdc++.h>
using namespace std;

class A
{
  public:
    int a;
}; // sizeof(A) = 4

class B : virtual public A
{
}; // sizeof(B) = 4 + 4 = 8

class C : virtual public A
{
}; // sizeof(C) = 4 + 4 = 8

class D : public B, public C
{
}; // sizeof(D) = 8 + 8 - 1 * 4 = 12

int main(int argc, char *argv[])
{
    A a;
    B b;
    C c;
    D d;
    std::cout<<"go";
    return 0;
}
