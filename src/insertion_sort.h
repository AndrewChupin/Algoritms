//
// Created by Andrew Chupin on 2019-08-01.
//

#ifndef ALGORITMS_INSERTION_SORT_H
#define ALGORITMS_INSERTION_SORT_H

#include <vector>

template <class T>
void insertion_sort(std::vector<T>& data) {
    int32_t size = data.size();
    for (int32_t i = 1; i < size; i++) {
        for (int32_t j = i; j > 0 && data[j - 1] > data[j]; j--) {
            std::swap(data[j - 1], data[j]);
        }
    }
}


#endif //ALGORITMS_INSERTION_SORT_H
