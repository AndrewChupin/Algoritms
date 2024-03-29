//
// Created by Andrew Chupin on 2019-07-28.
//

#ifndef ALGORITMS_HEAP_SORT_H
#define ALGORITMS_HEAP_SORT_H

#include <iostream>


template <class T>
void __sort_branch(std::vector<T> &data, int32_t root, int32_t end) {
    int32_t largest = root;
    int32_t l = 2 * root + 1;
    int32_t r = 2 * root + 2;

    if (l < end && data[l] > data[largest])
        largest = l;

    if (r < end && data[r] > data[largest])
        largest = r;

    if (largest != root) {
        std::swap(data[root], data[largest]);
        __sort_branch(data, largest, end);
    }
}

template <class T>
void heap_sort(std::vector<T>& data){
    int32_t size = data.size();

    for (int32_t i = size / 2 - 1; i >= 0; i--) {
        __sort_branch(data, i, size);
    }

    for (int32_t i = size - 1; i >= 0; i--) {
        std::swap(data[0], data[i]);
        __sort_branch(data, 0, i);
    }
}

#endif //ALGORITMS_HEAP_SORT_H
