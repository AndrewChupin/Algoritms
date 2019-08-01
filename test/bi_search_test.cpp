//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/bi_search.h"


TEST(BiSearchTest, CheckExist) {
    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    int32_t value = 1;
    EXPECT_TRUE(bi_search<int32_t>(data, value));
}

TEST(BiSearchTest, CheckInEmpty) {
    std::vector<int32_t> data = { };
    int32_t value = 1;
    EXPECT_FALSE(bi_search<int32_t>(data, value));
}

TEST(BiSearchTest, CheckNonExist) {
    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    int32_t value = 10;
    EXPECT_FALSE(bi_search<int32_t>(data, value));
}
