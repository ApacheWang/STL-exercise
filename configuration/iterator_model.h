//
// Created by root on 5/27/20.
//

#ifndef TEST_ITERATOR_MODEL_H
#define TEST_ITERATOR_MODEL_H

template <class InputIterator, class T>
InputIterator  find (InputIterator first, InputIterator last, const T& value) {
    while (first != last && *first != value) ++first;
    return first;
}
template <class InputIterator, class Function>
Functionfor_each (InputIterator first, InputIterator last, Function f) {
for ( ; first != last; ++first)
f(*first);
return f;
}

#endif //TEST_ITERATOR_MODEL_H
