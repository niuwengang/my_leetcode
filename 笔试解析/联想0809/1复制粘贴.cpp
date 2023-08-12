#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str;
    int str_num;
    int operation_num;

    while (cin >> str_num >> operation_num)
    {
        string str;
        cin >> str;
        string res=str;
        vector<int> l_vec(operation_num), r_vec(operation_num), op(operation_num);
        for (int i = 0; i < operation_num; i++)
        {
            cin >> l_vec[i];
        }
        for (int i = 0; i < operation_num; i++)
        {
            cin >> r_vec[i];
        }
        for (int i = 0; i < operation_num; i++)
        {
            cin >> op[i];
        }
        for (int i = 0; i < operation_num; i++)
        {
            string str_tmep = str.substr(l_vec[i] - 1, r_vec[i] - 1);
            if (op[i] == 0)
            {
                str_tmep += res;
                res = str_tmep;
            }
            else
            {
                res += str_tmep;
            }
        }
        std::cout << res << std::endl;
    }
    return 0;
}