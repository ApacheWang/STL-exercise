//
// Created by root on 5/27/20.
//

// file: 1config-template-exp-special.cpp
//以下测试 class template explicit specialization
// test __STL_TEMPLATE_NULL in <stl_config.h>
// ref. C++ Primer 3/e, p.858
// vc6[o] cb4[x] gcc[o]
#include <iostream>
using namespace std;
//将 __STL_TEMPLATE_NULL  定义为 template<> ，可以。
//若定义为 blank，如下，则只适用于 GCC.
#define __STL_TEMPLATE_NULL /* blank */
template <class Key> struct hash {
    void operator()() { cout << "hash<T>" << endl; }
};
// explicit specialization
__STL_TEMPLATE_NULL struct  hash<char> {
    void operator()() { cout << "hash<char>" << endl; }
};
__STL_TEMPLATE_NULL struct  hash<unsigned char> {
    void operator()() { cout << "hash<unsigned char>" << endl; }
};
int main()
{
    hash<long> t1;
    hash<char> t2;
    hash<unsigned char> t3;
    t1(); // hash<T>
    t2(); // hash<char>
    t3(); // hash<unsigned char>
}