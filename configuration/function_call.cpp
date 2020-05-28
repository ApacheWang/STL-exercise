//
// Created by root on 5/27/20.
//

#include <iostream>
using namespace std;

template<class T>
class Plus {
public:
    T operator()(const T& a, const T& b) const {return a+b;};
};


template<class T>
class Minus {
public:
    T operator()(const T& a, const T& b) const {return a-b;};
};

int main() {
    Plus<int> p;
    Minus<int> m;
    cout << p(3, 4) << endl;
    cout << m(5,6) << endl;
    cout << Plus<int>()(33, 55) << endl;
    cout << Minus<int>()(33, 55) << endl;
    return 0;
}
