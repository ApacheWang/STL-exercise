//
// Created by root on 5/27/20.
//

// file: 1config8.cpp
//测试 class template  之内可否再有 template (members).
// test __STL_MEMBER_TEMPLATES in <stl_config.h>
// ref. C++ Primer 3/e, p.844
// vc6[o] cb4[o] gcc[o]

#include <iostream>
using namespace std;
class alloc {
};
template <class T, class Alloc = alloc>
class vector {
public:
    typedef T value_type;
    typedef value_type* iterator;
    template <class I>
    void insert(iterator position, I first, I last) {
        cout << "insert()" << endl;
    }
};
int main()
{
    int ia[5] = {0,1,2,3,4};
    vector<int> x;
    vector<int>::iterator ite;
    x.insert(ite, ia, ia+5); // insert()
}