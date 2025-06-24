#include <stdio.h>
#include <assert.h>
#include "../include/insertion_sort.h"

#define ARRAY_LEN(arr) (sizeof(arr) / sizeof((arr)[0]))

void insertion_assert_array_equal(const int *actual, const int *expected, const size_t size) {
    for (size_t i = 0; i < size; ++i) {
        assert(actual[i] == expected[i]);
    }
}

void lunch_insert_sort_tests() {
    int actual_1[] = {};
    const int expected_1[] = {};
    insertion_sort(actual_1, ARRAY_LEN(actual_1));
    insertion_assert_array_equal(actual_1, expected_1, ARRAY_LEN(expected_1));

    int actual_2[] = {42};
    const int expected_2[] = {42};
    insertion_sort(actual_2, ARRAY_LEN(actual_2));
    insertion_assert_array_equal(actual_2, expected_2, ARRAY_LEN(expected_2));

    int actual_3[] = {1, 2, 3, 4, 5};
    const int expected_3[] = {1, 2, 3, 4, 5};
    insertion_sort(actual_3, ARRAY_LEN(actual_3));
    insertion_assert_array_equal(actual_3, expected_3, ARRAY_LEN(expected_3));

    int actual_4[] = {9, 7, 5, 3, 1};
    const int expected_4[] = {1, 3, 5, 7, 9};
    insertion_sort(actual_4, ARRAY_LEN(actual_4));
    insertion_assert_array_equal(actual_4, expected_4, ARRAY_LEN(expected_4));

    int actual_5[] = {4, 2, 4, 4, 1};
    const int expected_5[] = {1, 2, 4, 4, 4};
    insertion_sort(actual_5, ARRAY_LEN(actual_5));
    insertion_assert_array_equal(actual_5, expected_5, ARRAY_LEN(expected_5));

    int actual_6[] = {-5, 3, -1, 0, -3};
    const int expected_6[] = {-5, -3, -1, 0, 3};
    insertion_sort(actual_6, ARRAY_LEN(actual_6));
    insertion_assert_array_equal(actual_6, expected_6, ARRAY_LEN(expected_6));

    int actual_7[] = {10, 1, 9, 2, 8};
    const int expected_7[] = {1, 2, 8, 9, 10};
    insertion_sort(actual_7, ARRAY_LEN(actual_7));
    insertion_assert_array_equal(actual_7, expected_7, ARRAY_LEN(expected_7));

    int actual_8[] = {999999, -999999, 0, 123456, -123456};
    const int expected_8[] = {-999999, -123456, 0, 123456, 999999};
    insertion_sort(actual_8, ARRAY_LEN(actual_8));
    insertion_assert_array_equal(actual_8, expected_8, ARRAY_LEN(expected_8));

    int actual_9[] = {5, 5, 5, 5, 5};
    const int expected_9[] = {5, 5, 5, 5, 5};
    insertion_sort(actual_9, ARRAY_LEN(actual_9));
    insertion_assert_array_equal(actual_9, expected_9, ARRAY_LEN(expected_9));

    int actual_10[] = {3, 1, 4, 1, 5, 9, 2, 6};
    const int expected_10[] = {1, 1, 2, 3, 4, 5, 6, 9};
    insertion_sort(actual_10, ARRAY_LEN(actual_10));
    insertion_assert_array_equal(actual_10, expected_10, ARRAY_LEN(expected_10));
}

