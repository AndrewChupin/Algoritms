//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/heap_sort.h"


TEST(HeapSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    heap_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(HeapSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    heap_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(HeapSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    heap_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(HeapSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    heap_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(HeapSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    heap_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}
