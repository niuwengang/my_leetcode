#include <bits/stdc++.h>
#include <stack>
using namespace std;

class MyQueue
{
  public:
    MyQueue()
    {
    }

    void push(int x)
    {
        main_part.emplace(x);
    }

    int pop()
    {
        if (main_part.size() == 0)
        {
            return -1;
        }
        while (main_part.size() != 1)
        {
            temp_part.emplace(main_part.top());
            main_part.pop();
        }
        int res = main_part.top();
        main_part.pop();
        while (temp_part.size() != 0)
        {
            main_part.emplace(temp_part.top());
            temp_part.pop();
        }
        return res;
    }

    int peek()
    {
        if (main_part.size() == 0)
            return -1;
        while (main_part.size() != 1)
        {
            temp_part.emplace(main_part.top());
            main_part.pop();
        }
        int res = main_part.top();
        while (temp_part.size() != 0)
        {
            main_part.emplace(temp_part.top());
            temp_part.pop();
        }
        return res;
    }

    bool empty()
    {
        return !main_part.size();
    }

    std::stack<int> main_part;
    std::stack<int> temp_part;
};

int main(int argc, char **argv)
{
    MyQueue *obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    obj->push(3);
    obj->push(4);
    int param_1 = obj->pop();
    obj->push(5);

    int param_2 = obj->pop();
    int param_3 = obj->pop();
    int param_4 = obj->pop();
    int param_5 = obj->pop();

    return 0;
}