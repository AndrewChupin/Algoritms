//
// Created by Andrew Chupin on 2019-08-01.
//

#ifndef ALGORITMS_LINEAR_SEARCH_H
#define ALGORITMS_LINEAR_SEARCH_H

#include <vector>


template <class T>
bool linear_search(std::vector<T>& data, T& value) {
    if (data.size() == 0) {
        return false;
    }

    if (value < data.front()) {
        return false;
    }

    if (value > data.back()) {
        return false;
    }

    for (T& t : data) {
        if (t == value) {
            return true;
        }
    }

    return false;
}

#endif //ALGORITMS_LINEAR_SEARCH_H
