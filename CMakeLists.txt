cmake_minimum_required(VERSION 3.28)
project(sortAlgorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(sortAlgorithms
        src/substitution_sort.c
        src/insertion_sort.c
        src/bubble_sort.c
        src/selection_sort.c
        include/buble_sort.h
        include/insertion_sort.h
        include/selection_sort.h
        include/substitution_sort.h
        include/util.h
        src/util/util.c
        tests/test_buble_sort.c
        tests/test_insertion_sort.c
        include/test_buble_sort.h
        include/test_insert_sort.h
        tests/test_selection_sort.c
        include/test_selection_sort.h
        tests/test_substitution_sort.c
        include/test_substitution_sort.h
        tests/main_test.c
)
