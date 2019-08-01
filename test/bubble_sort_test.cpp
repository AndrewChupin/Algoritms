//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/bubble_sort.h"


TEST(BubbleSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}


TEST(BubbleSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}
