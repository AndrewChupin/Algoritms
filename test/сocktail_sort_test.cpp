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

TEST(CocktailSortTest, SortRandomTest) {
    std::vector<int32_t> dataValid = { 1, 2, 4, 5, 6 };

    std::vector<int32_t> data = { 4, 5, 1, 2, 6 };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(CocktailSortTest, SortBigTest) {
    int32_t count = 14'748;

    std::vector<int32_t> dataValid;
    dataValid.reserve(count);
    for (int32_t i = 0; i < count; i++) {
        dataValid.push_back(i);
    }

    std::vector<int32_t> data;
    data.reserve(count);
    int32_t size = count - 1;
    for (int32_t i = size; i >= 0; i--) {
        data.push_back(i);
    }

    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(CocktailSortTest, SortSameAndNegativeTest) {
    std::vector<int32_t> dataValid = { -313, -9, -9, 1, 3, 23, 23, 32, 233 };

    std::vector<int32_t> data = { 3, 1, 23, -9, 233, 23, -313, 32, -9 };
    cocktail_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}
