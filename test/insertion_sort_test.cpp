//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/insertion_sort.h"


TEST(InsertionSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(InsertionSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(InsertionSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(InsertionSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(InsertionSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(InsertionSortTest, SortRandomTest) {
    std::vector<int32_t> dataValid = { 1, 2, 4, 5, 6 };

    std::vector<int32_t> data = { 4, 5, 1, 2, 6 };
    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(InsertionSortTest, SortBigTest) {
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

    insertion_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}
