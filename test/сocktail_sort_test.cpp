//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/cocktail_sort.h"


TEST(CocktailSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(CocktailSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(CocktailSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(CocktailSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(CocktailSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}
