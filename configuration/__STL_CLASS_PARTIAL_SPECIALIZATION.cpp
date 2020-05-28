//
// Created by root on 5/27/20.
//

// file: 1config5.cpp
//测试 class template partial specialization  —在 class template  的
// 一般化设计之外，特别针对某些 template  参数做特殊设计。
// test __STL_CLASS_PARTIAL_SPECIALIZATION in <stl_config.h>
// ref. C++ Primer 3/e, p.860
// vc6[x] cb4[o] gcc[o]
#include <iostream>
using namespace std;
//一般化设计
template <class I, class O>
struct testClass
{
    testClass() { cout << "I, O" << endl; }
};
//特殊化设计
template <class T>
struct testClass <T*, T*>
{
    testClass() { cout << "T*, T*" << endl; }
};
//特殊化设计
template <class T>
struct testClass <const T*, T*>
{
    testClass() { cout << "const T*, T*" << endl; }
};
int main()
{
    testClass<int, char> obj1;
    testClass<int*, int*> obj2;
    testClass<const int*, int*> obj3;
}