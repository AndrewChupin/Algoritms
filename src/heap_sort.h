//
// Created by Andrew Chupin on 2019-07-28.
//

#ifndef ALGORITMS_HEAP_SORT_H
#define ALGORITMS_HEAP_SORT_H

#include <iostream>


template <class T>
void __sort_branch(std::vector<T> &data, int32_t size, int32_t id)
{
    int32_t largest = id;
    int32_t l = 2 * id + 1;
    int32_t r = 2 * id + 2;

    if (l < size && data[l] > data[largest])
        largest = l;

    if (r < size && data[r] > data[largest])
        largest = r;

    if (largest != id) {
        std::swap(data[id], data[largest]);
        __sort_branch(data, size, largest);
    }
}

template <class T>
void heap_sort(std::vector<T>& data)
{
    int32_t size = data.size();

    for (int32_t i = size / 2 - 1; i >= 0; i--) {
        __sort_branch(data, size, i);
    }

    for (int32_t i = size - 1; i >= 0; i--) {
        std::swap(data[0], data[i]);
        __sort_branch(data, i, 0);
    }
}

#endif //ALGORITMS_HEAP_SORT_H
