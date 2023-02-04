#include <iostream>
#include <unordered_map>

using namespace std;

/*
unorder_map 
无序且唯一
*/

int main(int argc, char *argvp[])
{
    unordered_map<string, string> map;
    // 插入
    map.emplace("slam", "liosam");
    map["control"] = "LQR";
    map.insert({"plan", "fast palnner"});
    // 删除
    map.erase("plan");
    // 访问
    map.at("slam") = "vins";
    // 遍历
    for (unordered_map<string, string>::iterator point = map.begin(); point != map.end(); point++)
    {
        cout << "模块:" << point->first << "--"
             << "方法:" << point->second << endl;
    }
    // 查找
    unordered_map<string, string>::iterator point = map.find("slam");
    if(point==map.end())
    {
        cout << "未找到" << endl;
    }
    else{
        cout << "已找到" << endl;
    }

    return 0;
}