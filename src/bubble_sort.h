//
// Created by Andrew Chupin on 2019-07-28.
//

#ifndef ALGORITMS_BUBBLE_SORT_H
#define ALGORITMS_BUBBLE_SORT_H

#include <vector>

template <typename T>
void bubble_sort(std::vector<T>& data) {
    bool isSwapped;
    int32_t size = data.size();

    for (int32_t i = 0; i < size - 1; i++) {
        isSwapped = false;
        for (int32_t j = 0; j < size - i - 1; j++) {
            int next_index = j + 1;
            if (data[j] > data[next_index]) {
                std::swap(data[j], data[next_index]);
                isSwapped = true;
            }
        }

        if (!isSwapped) {
            break;
        }
    }
}

#endif //ALGORITMS_BUBBLE_SORT_H
