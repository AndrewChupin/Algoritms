### [COMMON] ###
cmake_minimum_required(VERSION 3.14)
project(Algoritms)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


### [SRC] ###
add_library(
        src
        src/bi_search.h
        src/bubble_sort.h
        src/quick_sort.h
        src/cocktail_sort.h
        src/heap_sort.h
        src/selection_sort.h
        src/empty.cpp
)

add_executable(algoritms main.cpp)
target_link_libraries(algoritms src)


### [TESTS] ###
add_executable(
        unit_tests
        test/bi_search_test.cpp
        test/main.cpp
        test/bubble_sort_test.cpp test/heap_sort_test.cpp test/quick_sort_test.cpp test/selection_sort_test.cpp test/сocktail_sort_test.cpp)

target_link_libraries(unit_tests ${GTEST_BOTH_LIBRARIES})
target_link_libraries(unit_tests src)

enable_testing()
add_test(NAME unit COMMAND unit_tests)