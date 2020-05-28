//
// Created by root on 5/27/20.
//

#include <iostream>
using namespace std;

class INT {
    friend ostream& operator << (ostream&, const INT& m);
public:
    INT(const int& m) : m_i(m) {
    }

    INT& operator++() {
        ++(this->m_i);
        return *(this);
    }

    const INT operator++(int) {
        INT temp = *this;
        ++(*this);
        return temp;
    }

    INT& operator--() {
        --(this->m_i);
        return *(this);
    }

    const INT operator--(int) {
        INT temp = *this;
        --(*this);
        return temp;
    }

    int& operator*() const {
        return (int&)m_i;
    }


private:
    int m_i;
};

ostream& operator << (ostream& os, const INT& m) {
    os << "[" << m.m_i << "]" << '\n';
}

int main() {
    INT i(5);
    cout << i;
    cout << ++i;
    cout << i++;
    cout << --i;
    cout << i--;
    cout << i;
    return 0;
}