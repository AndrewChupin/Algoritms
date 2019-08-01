//
// Created by Andrew Chupin on 2019-07-28.
//

#ifndef ALGORITMS_BI_SEARCH_H
#define ALGORITMS_BI_SEARCH_H

#include <vector>
#include <functional>


template <typename T>
bool bi_search(std::vector<T>& data, T& value) {
    if (data.size() == 0) {
        return false;
    }

    if (value < data.front()) {
        return false;
    }

    if (value > data.back()) {
        return false;
    }

    typename std::vector<T>::const_iterator v_begin = data.cbegin();
    typename std::vector<T>::const_iterator v_end = data.cend();
    typename std::vector<T>::const_iterator v_mid;

    while (std::distance(v_begin, v_end) > 0) {
        v_mid = v_begin + std::distance(v_begin, v_end) / 2;

        if (value > *v_mid) {
            v_begin = v_mid + 1;
        } else {
            v_end = v_mid;
        }
    }

    return value == *v_end;
}


#endif //ALGORITMS_BI_SEARCH_H
