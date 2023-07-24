#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> res(10);
    std::iota(res.begin(), res.end(), 0);
    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << " ";
    }
}
// class Base
// {
//   public:
//     Base()
//     {
//         cout << "Base() called." << endl;
//     }
//     virtual ~Base()
//     {
//         cout << "~Base() called." << endl;
//     }

//     int base = 0;
// };
// class Dervied : public Base
// {
//   public:
//     Dervied()
//     {
//         cout << "Dervied() called." << endl;
//     }
//     Dervied(int a)
//     {
//         func( a);
//     }
//     ~Dervied()
//     {
//         cout << "Dervied() called." << endl;
//     }
//     void func(int param)
//     {

//     }
// };

// int main()
// {
//     Base *b = new Dervied();

//     delete b;
//     return 0;
// }