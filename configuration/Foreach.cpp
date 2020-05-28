//
// Created by root on 5/27/20.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
class print {
public:
    void operator() (const T& value) {
        cout << value << endl;
    }
};

int main() {
    int in[6] = {0, 1, 2, 3, 4, 5};
    vector<int> elem(in, in+6);
    // print<int>()  是一个暂时对象，不是一个函式呼叫动作。
    for_each(elem.begin(), elem.end(), print<int>());
    return 0;
}