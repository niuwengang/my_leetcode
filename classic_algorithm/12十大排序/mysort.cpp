#include <bits/stdc++.h>
#include <random>
using namespace std;

class Mysort
{
  public:
    Mysort() = delete;
    Mysort(vector<int> &vec) : _vec(vec)
    {
    }

    friend ostream &operator<<(ostream &os, const Mysort &obj);
    void BubbleSort();
    void SelectSort();
    void InsertSort();
    void QuickSort(int low, int high);

   vector<int> _vec;
};

ostream &operator<<(ostream &os, const Mysort &obj)
{
    for (const auto &it : obj._vec)
    {
        os << it << " ";
    }
    return os;
}

vector<int> GenerateRandomSequence(const int num, const int lower_limit, const int upper_limit)
{
    vector<int> res_vec(num);
    std::random_device rd;
    const int interval = upper_limit - lower_limit + 1;
    for (int index = 0; index < num; index++)
    {
        res_vec[index] = (rd() % interval) + lower_limit;
    }
    return res_vec;
}

/*
冒泡排序
时间复杂度: o(n^2)
思路:相邻两两交换
*/
void Mysort::BubbleSort()
{
    // cnt 排序趟数
    for (int cnt = _vec.size() - 1; cnt > 0; cnt--)
    {
        for (int index = 0; index < cnt; index++)
        {
            if (_vec[index] > _vec[index + 1])
            {
                swap(_vec[index], _vec[index + 1]);
            }
        }
    }
}

/*
选择排序
时间复杂度:o(n^2)
思路:找最小的与当前头交换
优化:
*/
void Mysort::SelectSort()
{
    int len = _vec.size();
    for (int index = 0; index < len - 1; index++)
    {

        int index_min = index; // 只计下标比较大小就行
        for (int sub_index = index + 1; sub_index < len; sub_index++)
        {
            if (_vec[index_min] > _vec[sub_index])
            {
                index_min = sub_index;
            }
        }
        if (index_min != index)
        {
            swap(_vec[index_min], _vec[index]);
        }
    }
}

/*
插入排序
时间复杂度:o(n^2)
思路:类似扑克拿一张排一张
*/
void Mysort::InsertSort()
{
    for (int index = 1; index < _vec.size(); index++)
    {

        for (int sub_index = index; sub_index >= 0; sub_index--)
        {
            if (_vec[sub_index - 1] >= _vec[sub_index])
            {
                swap(_vec[sub_index - 1], _vec[sub_index]); // 与前面数比较不断交换
            }
            else
            {
                break;
            }
        }
    }
}



void Mysort::QuickSort(int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int sub_low = low, sub_high = high;
    int pivot = _vec[sub_low];
    while (sub_low < sub_high)
    {
        while (sub_low < sub_high && _vec[sub_high] >= pivot)
        {
            sub_high--;
        }
        if (sub_low < sub_high)
        {
            _vec[sub_low] = _vec[sub_high];
        }
        while (sub_low < sub_high && _vec[sub_low] <= pivot)
        {
            sub_low++;
        }
        if (sub_low < sub_high)
        {
            _vec[sub_high] = _vec[sub_low];
        }
        if (sub_low >= sub_high)
        {
            _vec[sub_low] = pivot;
        }
    }
    QuickSort( low, sub_low - 1);//左找
    QuickSort( sub_low +1,high);//右找
}

int main()
{
    vector<int> in = GenerateRandomSequence(10, 0, 10); //[]
    Mysort *my_sort_ptr = new Mysort(in);
    cout << "排序前" << *my_sort_ptr << endl;
    // my_sort_ptr->BubbleSort();
    // my_sort_ptr->SelectSort();
    // my_sort_ptr->InsertSort();
    my_sort_ptr->QuickSort(0, in.size()-1);
    cout << "排序后" << *my_sort_ptr << endl;
    delete my_sort_ptr;
}
