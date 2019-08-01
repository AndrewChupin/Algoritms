#include <iostream>
#include <vector>
#include "src/bi_search.h"
#include "src/bubble_sort.h"
#include "src/quick_sort.h"
#include "src/cocktail_sort.h"
#include "src/selection_sort.h"
#include "src/heap_sort.h"
#include "src/insertion_sort.h"


int main() {
    std::vector<int> nums = { 4, 5, 1, 2, 6 };
    for (int i = 0; i < nums.size(); i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("\n");

    insertion_sort<int>(nums);
    for (int i = 0; i < nums.size(); i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}