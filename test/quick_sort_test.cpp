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
