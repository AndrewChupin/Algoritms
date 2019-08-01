//
// Created by Andrew Chupin on 2019-07-28.
//

#ifndef ALGORITMS_QUICK_SORT_H
#define ALGORITMS_QUICK_SORT_H


#include <vector>


template <class T>
void __part_sort(std::vector<T> &data, int32_t start, int32_t end) {
    if (start >= end) {
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

    __part_sort(data, start, mid);
    __part_sort(data, mid + 1, end);
}


template <class T>
void quick_sort(std::vector<T>& data) {
    int32_t start = 0;
    int32_t end = data.size() - 1;
    __part_sort(data, start, end);
}

#endif //ALGORITMS_QUICK_SORT_H
