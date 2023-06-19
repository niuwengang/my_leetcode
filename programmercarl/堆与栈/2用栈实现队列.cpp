#include <bits/stdc++.h>
#include <queue>
using namespace std;

class MyStack
{
  public:
    MyStack()
    {
    }

    void push(int x)
    {
        main_part.push(x);
    }

    int pop()
    {
        while (!main_part.empty())
        {
            temp_part.push(main_part.front());
            main_part.pop();
        }

        while (temp_part.size() != 1)
        {
            main_part.push(temp_part.front());
            temp_part.pop();
        }
        int res = temp_part.back();
        temp_part.pop();
        return res;
    }

    int top()
    {
        return main_part.back();
    }

    bool empty()
    {
        return !main_part.size();
    }
    std::queue<int> main_part;
    std::queue<int> temp_part;
};

int main()
{
    MyStack *obj = new MyStack();
    obj->push(1);
    obj->push(2);
    int param_3 = obj->top();
    int param_2 = obj->pop();

    return 0;
}