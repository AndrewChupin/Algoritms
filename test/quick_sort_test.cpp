//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/quick_sort.h"


TEST(QuickSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(QuickSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(QuickSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(QuickSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(QuickSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(QuickSortTest, SortRandomTest) {
    std::vector<int32_t> dataValid = { 1, 2, 4, 5, 6 };

    std::vector<int32_t> data = { 4, 5, 1, 2, 6 };
    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(QuickSortTest, SortBigTest) {
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

    quick_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}