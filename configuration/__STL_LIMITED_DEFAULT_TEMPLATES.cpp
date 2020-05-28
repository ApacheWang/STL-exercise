//
// Created by root on 5/27/20.
//

// file: 1config10.cpp
//测试 template  参数可否根据前一个 template  参数而设定默认值。
// test __STL_LIMITED_DEFAULT_TEMPLATES in <stl_config.h>
// ref. C++ Primer 3/e, p.816
// vc6[o] cb4[o] gcc[o]
#include <iostream>
#include <cstddef> // for size_t
using namespace std;
class alloc {
};
template <class T,  class Alloc = alloc, size_t BufSiz = 0>
class deque {
public:
    deque() { cout << "deque" << endl; }
};
//根据前一个参数值 T，设定下一个参数 Sequence 的默认值为 deque<T>
template <class T,  class Sequence = deque<T> >
class stack {
public:
    stack() { cout << "stack" << endl; }
private:
    Sequence c;
};
int main()
{
    stack<int> x; // deque
// stack
}