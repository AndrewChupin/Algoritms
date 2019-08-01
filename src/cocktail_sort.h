//
// Created by Andrew Chupin on 2019-07-28.
//

#ifndef ALGORITMS_COCKTAIL_SORT_H
#define ALGORITMS_COCKTAIL_SORT_H

#include <vector>

template <class T>
void cocktail_sort(std::vector<T>& data) {
    int32_t head = 0;
    int32_t tail = data.size() - 1;

    do {
        for (int32_t i = head; i < tail; i++) {
            int inc_index = i + 1;
            if (data[i] > data[inc_index]) {
                std::swap(data[i], data[inc_index]);
            }
        }
        tail--;

        for (int32_t i = tail; i > head; i--) {
            int dec_index = i - 1;
            if (data[i] < data[dec_index]) {
                std::swap(data[dec_index], data[i]);
            }
        }
        head++;
    } while (head < tail);
}


#endif //ALGORITMS_COCKTAIL_SORT_H
