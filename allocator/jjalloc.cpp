//
// Created by root on 5/27/20.
//

// file: 2jjalloc.cpp
// VC6[o], BCB4[o], GCC2.9[x].
#include "jjalloc.h"
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int ia[5] = {0,1,2,3,4};
    unsigned int i;
    vector<int, JJ::allocator<int> > iv(ia, ia+5);
    for(i=0; i<iv.size(); i++)
        cout << iv[i] << ' ';
    cout << endl;
    return 0;
}
