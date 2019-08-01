//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/selection_sort.h"


TEST(SelectorSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(SelectorSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(SelectorSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(SelectorSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(SelectorSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(SelectorSortTest, SortRandomTest) {
    std::vector<int32_t> dataValid = { 1, 2, 4, 5, 6 };

    std::vector<int32_t> data = { 4, 5, 1, 2, 6 };
    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(SelectorSortTest, SortBigTest) {
    int32_t count = 14'748'364;

    std::vector<int32_t> dataValid;
    dataValid.reserve(count);
    for (int32_t i = 0; i < count; i++) {
        dataValid[i] = i;
    }

    std::vector<int32_t> data;
    data.reserve(count);
    int32_t size = count - 1;
    for (int32_t i = size; i >= 0; i--) {
        data[i] = i;
    }

    selection_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}