#include <list>
#include <iostream>
#include <vector>
using namespace std;
/*
1. 双链表实现
2. 迭代器不支持随即访问
*/

int main()
{
    list<int> l1;
    cout << l1.size() << endl;

    vector<int> i1={1,2,3,4,5};
    list<int> l2(i1.begin(),i1.begin()+2);
}