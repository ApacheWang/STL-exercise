//
// Created by root on 5/27/20.
//

// file: 1config3.cpp
//测试在 class template  中拥有 static data members.
// test __STL_STATIC_TEMPLATE_MEMBER_BUG, defined in <stl_config.h>
// ref. C++ Primer 3/e, p.839
// vc6[o] cb4[x] gcc[o]
// cb4 does not support static data member initialization.

#include <iostream>
using namespace std;
template <typename T>
class testClass {
public: //纯粹为了方便测试，使用 public
    static int _data;
};
//为 static data members  进行定义（配置内存），并设初值。
int testClass<int>::_data = 1;
int testClass<char>::_data = 2;

int main()
{
//  以下，CB4表现不佳，没有接受初值设定。
    cout << testClass<int>::_data << endl; // GCC, VC6:1 CB4:0
    cout << testClass<char>::_data << endl; // GCC, VC6:2 CB4:0
    testClass<int> obji1, obji2;
    testClass<char> objc1, objc2;
    cout << obji1._data << endl; // GCC, VC6:1 CB4:0
    cout << obji2._data << endl; // GCC, VC6:1 CB4:0
    cout << objc1._data << endl; // GCC, VC6:2 CB4:0
    cout << objc2._data << endl; // GCC, VC6:2 CB4:0
    obji1._data = 3;
    objc2._data = 4;
    cout << obji1._data << endl; // GCC, VC6:3 CB4:3
    cout << obji2._data << endl; // GCC, VC6:3 CB4:3
    cout << objc1._data << endl; // GCC, VC6:4 CB4:4
    cout << objc2._data << endl; // GCC, VC6:4 CB4:4

    return 0;
}