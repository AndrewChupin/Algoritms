#include <iostream>
#include <vector>
#include "src/bi_search.h"
#include "src/bubble_sort.h"
#include "src/quick_sort.h"
#include "src/cocktail_sort.h"
#include "src/selection_sort.h"
#include "src/heap_sort.h"
#include "src/insertion_sort.h"
#include "src/intro_sort.h"


int main() {
    std::vector<int32_t> data = { 3, 1, 23, -9, 233, 23, -313, 32, -9 };

    for (int i = 0; i < data.size(); i++) {
       printf("%d ", data[i]);
    }
    printf("\n");
    printf("\n");


    intro_sort<int32_t>(data);
    for (int i = 0; i < data.size(); i++) {
       printf("%d ", data[i]);
    }


    return 0;
}