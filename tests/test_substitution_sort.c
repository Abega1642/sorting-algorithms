#include <stdio.h>
#include <assert.h>
#include "../include/substitution_sort.h"

#define ARRAY_LEN(arr) (sizeof(arr) / sizeof((arr)[0]))

void substitution_assert_array_equal(const int *a, const int *b, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == b[i]);
    }
}

void lunch_substitution_sort_tests() {
    int actual_1[] = {};
    const int expected_1[] = {};
    substitution_sort(actual_1, ARRAY_LEN(actual_1));
    substitution_assert_array_equal(actual_1, expected_1, ARRAY_LEN(expected_1));

    int actual_2[] = {42};
    const int expected_2[] = {42};
    substitution_sort(actual_2, ARRAY_LEN(actual_2));
    substitution_assert_array_equal(actual_2, expected_2, ARRAY_LEN(expected_2));

    int actual_3[] = {1, 2, 3};
    const int expected_3[] = {1, 2, 3};
    substitution_sort(actual_3, ARRAY_LEN(actual_3));
    substitution_assert_array_equal(actual_3, expected_3, ARRAY_LEN(expected_3));

    int actual_4[] = {3, 2, 1};
    const int expected_4[] = {1, 2, 3};
    substitution_sort(actual_4, ARRAY_LEN(actual_4));
    substitution_assert_array_equal(actual_4, expected_4, ARRAY_LEN(expected_4));

    int actual_5[] = {-3, -1, -2, 0};
    const int expected_5[] = {-3, -2, -1, 0};
    substitution_sort(actual_5, ARRAY_LEN(actual_5));
    substitution_assert_array_equal(actual_5, expected_5, ARRAY_LEN(expected_5));

    int actual_6[] = {5, 2, 2, 5};
    const int expected_6[] = {2, 2, 5, 5};
    substitution_sort(actual_6, ARRAY_LEN(actual_6));
    substitution_assert_array_equal(actual_6, expected_6, ARRAY_LEN(expected_6));

    int actual_7[] = {42, 1, 99, 3, -1};
    const int expected_7[] = {-1, 1, 3, 42, 99};
    substitution_sort(actual_7, ARRAY_LEN(actual_7));
    substitution_assert_array_equal(actual_7, expected_7, ARRAY_LEN(expected_7));

    int actual_8[] = {7, 7, 7};
    const int expected_8[] = {7, 7, 7};
    substitution_sort(actual_8, ARRAY_LEN(actual_8));
    substitution_assert_array_equal(actual_8, expected_8, ARRAY_LEN(expected_8));

    int actual_9[] = {1000000, -1000000, 0};
    const int expected_9[] = {-1000000, 0, 1000000};
    substitution_sort(actual_9, ARRAY_LEN(actual_9));
    substitution_assert_array_equal(actual_9, expected_9, ARRAY_LEN(expected_9));

    int actual_10[] = {10, 1, 9, 2, 8};
    const int expected_10[] = {1, 2, 8, 9, 10};
    substitution_sort(actual_10, ARRAY_LEN(actual_10));
    substitution_assert_array_equal(actual_10, expected_10, ARRAY_LEN(expected_10));
}

