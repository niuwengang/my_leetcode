#include <bits/stdc++.h>
using namespace std;

/*
string 是封装了c风格的字符串
*/

int main()
{
    string str = "XYZ";
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << (int)str[3] << endl; // 最后一位

    char name[11] = {"hello"}; // c++11会自动补0
    memset(name, 0, sizeof(name));
    char dest[11];
    strcpy(dest,name);//拷贝
    //strncpy()
    strlen(dest);

    return 0;
}