//
// Created by Andrew Chupin on 2019-08-01.
//

#ifndef ALGORITMS_INTRO_SORT_H
#define ALGORITMS_INTRO_SORT_H

#include <vector>
#include <cmath>


template <class T>
int32_t __stack_depth_prediction(std::vector<T>& data) {
    int32_t size = data.size();
    return int32_t(2 * log(size));
}

template <class T>
void __heap_sort_branch(std::vector<T> &data, int32_t root, int32_t end) {
    int32_t largest = root;
    int32_t l = 2 * root + 1;
    int32_t r = 2 * root + 2;

    if (l < end && data[l] > data[largest])
        largest = l;

    if (r < end && data[r] > data[largest])
        largest = r;

    if (largest != root) {
        std::swap(data[root], data[largest]);
        __heap_sort_branch(data, largest, end);
    }
}

template <class T>
void __heap_sort(std::vector<T>& data, int32_t start, int32_t end) {
    int32_t diff = end - start;
    for (int32_t i = diff / 2 - 1; i >= start; i--) {
        __heap_sort_branch(data, i, end);
    }

    for (int32_t i = end - 1; i >= start; i--) {
        std::swap(data[start], data[i]);
        __heap_sort_branch(data, start, i);
    }
}

template <class T>
void __part_quick_sort(std::vector<T>& data, int32_t start, int32_t end, int32_t depth) {
    if (start >= end) {
        return;
    }

    if (depth == 0) {
        __heap_sort(data, start, end);
        return;
    }

    int32_t i = start;
    int32_t j = end;
    int32_t mid = (i + j) / 2;

    while (i < j) {
        while (i < mid && data[i] <= data[mid]) {
            i++;
        }

        while (j > mid && data[j] >= data[mid]) {
            j--;
        }

        if (i < j) {
            std::swap(data[i], data[j]);

            if (i == mid) {
                mid = j;
            }
            else if (j == mid) {
                mid = i;
            }
        }
    }

    __part_quick_sort(data, start, mid, depth - 1);
    __part_quick_sort(data, mid + 1, end, depth - 1);
}


template <class T>
void intro_sort(std::vector<T>& data) {
    int32_t depth = __stack_depth_prediction(data);
    int32_t start = 0;
    int32_t end = data.size() - 1;
    __part_quick_sort(data, start, end, depth);
}

#endif //ALGORITMS_INTRO_SORT_H
