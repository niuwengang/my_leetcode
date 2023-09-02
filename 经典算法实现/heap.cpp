#include "bits/stdc++.h"
using namespace std;
template <typename T> class Heap
{

  public:
    Heap() = default;
    void push(const T &element);//o(logn)
    void pop();                 // o(logn)
    T top();//o(1)

    vector<T> vec_;

    int vec_size_ = 1; // 不需要管理，自动扩容即可
    int heap_size_ = 0;
};

template <typename T> void Heap<T>::push(const T &element)
{
    /*1--必要时进行扩容*/
    if (heap_size_ == vec_size_ - 1)
    {
        vec_.resize(vec_size_ * 2);
        vec_size_ *= 2;
    }
    int current_node = ++heap_size_;
    /*2--父节点小于自己*/
    while (current_node != 1 && vec_[current_node / 2] < element)
    {
        swap(vec_[current_node], vec_[current_node / 2]);
        current_node /= 2;
    }
    /*3--赋值*/
    vec_[current_node] = element;
}

template <typename T> T Heap<T>::top()
{

    if (heap_size_ == 0)
    {
        throw invalid_argument("堆为空");
    }

    return vec_[1];
}

template <typename T> void Heap<T>::pop()
{
    if (heap_size_ == 0)
    {
        throw invalid_argument("堆为空");
    }
    // 删除最大元素
    vec_[1].~T();

    int current_node = 1;
    int child_node = 2;
    // 删除最后一个元素然后重建堆
    T last_element = vec_[heap_size_--];
    while (child_node <= heap_size_)
    {
        /*找子节点最大的*/
        if (vec_[child_node] < vec_[child_node + 1])
        {
            child_node++;
        }
        /*是否可以current_node*/
        if (last_element >= vec_[child_node])
        {
            break;
        }
        else // 不可以再往下找
        {
            vec_[current_node] = vec_[child_node];
            current_node = child_node;
            child_node *= 2;
        }
    }
    vec_[current_node] = last_element;
}

int main()
{
    shared_ptr<Heap<float>> heap_ptr = make_shared<Heap<float>>();
    heap_ptr->push(1.0);
    heap_ptr->push(2.0);
    heap_ptr->push(3.0);
    heap_ptr->pop();
    cout << heap_ptr->top();
    heap_ptr->pop();
    cout << heap_ptr->top();

    return 0;
}