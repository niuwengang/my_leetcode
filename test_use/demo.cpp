#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6};
    std::for_each(vec.begin(), vec.end(), [](int & index) { index+=20;return index; });
    for (auto &it : vec)
    {
        std::cout << it << " ";
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