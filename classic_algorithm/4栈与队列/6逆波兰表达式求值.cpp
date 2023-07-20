#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> num_stack;
        for (const auto &it : tokens)
        {
            if (it == "+")
            {
                int right_num = num_stack.top();
                num_stack.pop();
                int left_num = num_stack.top();
                num_stack.pop();
                num_stack.push(left_num + right_num);
            }
            else if (it == "-")
            {
                int right_num = num_stack.top();
                num_stack.pop();
                int left_num = num_stack.top();
                num_stack.pop();
                num_stack.push(left_num - right_num);
            }
            else if (it == "*")
            {
                int right_num = num_stack.top();
                num_stack.pop();
                int left_num = num_stack.top();
                num_stack.pop();
                num_stack.push(left_num * right_num);
            }
            else if (it == "/")
            {
                int right_num = num_stack.top();
                num_stack.pop();
                int left_num = num_stack.top();
                num_stack.pop();
                num_stack.push(left_num / right_num);
            }
            else
            {
                num_stack.push(stoi(it));
            }
        }
        return num_stack.top();
    }
};

int main()
{
    return 0;
}