//
// Created by Andrew Chupin on 2019-07-31.
//

#ifndef ALGORITMS_SELECTION_SORT_H
#define ALGORITMS_SELECTION_SORT_H

#include <vector>

template <class T>
void selection_sort(std::vector<T>& data) {
    int32_t size = data.size();
    for (int32_t i = 0; i < size - 1; i++) {
        int32_t min_id = i;

        for (int32_t j = i + 1; j < data.size(); j++) {
            if (data[j] < data[min_id]) {
                min_id = j;
            }
        }

        if (i != min_id) {
            std::swap(data[i], data[min_id]);
        }
    }
}

#endif //ALGORITMS_SELECTION_SORT_H
