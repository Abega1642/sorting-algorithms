#include <assert.h>
#include "../include/bubble_sort.h"
#include "../include/test_bubble_sort.h"

#define ARRAY_LEN(arr) (sizeof(arr) / sizeof((arr)[0]))

void assert_array_equal(const int *actual, const int *expected, const size_t size) {
    for (size_t i = 0; i < size; ++i) {
        assert(actual[i] == expected[i]);
    }
}

void lunch_buble_sort_tests() {
    int actual1[] = {};
    const int expected_1[] = {};
    bubbleSort(actual1, ARRAY_LEN(actual1));
    assert_array_equal(actual1, expected_1, ARRAY_LEN(actual1));


    int actual2[] = {42};
    const int expected_2[] = {42};
    bubbleSort(actual2, ARRAY_LEN(actual2));
    assert_array_equal(actual2, expected_2, ARRAY_LEN(actual2));


    int actual3[] = {7, 7, 7, 7};
    const int expected_3[] = {7, 7, 7, 7};
    bubbleSort(actual3, ARRAY_LEN(actual3));
    assert_array_equal(actual3, expected_3, ARRAY_LEN(actual3));


    int actual4[] = {1, 2, 3, 4, 5};
    const int expected_4[] = {1, 2, 3, 4, 5};
    bubbleSort(actual4, ARRAY_LEN(actual4));
    assert_array_equal(actual4, expected_4, ARRAY_LEN(actual4));


    int actual5[] = {5, 4, 3, 2, 1};
    const int expected_5[] = {1, 2, 3, 4, 5};
    bubbleSort(actual5, ARRAY_LEN(actual5));
    assert_array_equal(actual5, expected_5, ARRAY_LEN(actual5));


    int actual6[] = {-5, -10, 0, 5, -1};
    const int expected_6[] = {-10, -5, -1, 0, 5};
    bubbleSort(actual6, ARRAY_LEN(actual6));
    assert_array_equal(actual6, expected_6, ARRAY_LEN(actual6));


    int actual7[] = {4, 2, 4, 3, 4};
    const int expected_7[] = {2, 3, 4, 4, 4};
    bubbleSort(actual7, ARRAY_LEN(actual7));
    assert_array_equal(actual7, expected_7, ARRAY_LEN(actual7));


    int actual8[] = {100000, -100000, 99999, -99999, 0};
    const int expected_8[] = {-100000, -99999, 0, 99999, 100000};
    bubbleSort(actual8, ARRAY_LEN(actual8));
    assert_array_equal(actual8, expected_8, ARRAY_LEN(actual8));


    int actual9[] = {1, 100, 2, 99, 3, 98};
    const int expected_9[] = {1, 2, 3, 98, 99, 100};
    bubbleSort(actual9, ARRAY_LEN(actual9));
    assert_array_equal(actual9, expected_9, ARRAY_LEN(actual9));


    int actual10[] = {42, 7, 19, -3, 0, 5, 999, -1000};
    const int expected_10[] = {-1000, -3, 0, 5, 7, 19, 42, 999};
    bubbleSort(actual10, ARRAY_LEN(actual10));
    assert_array_equal(actual10, expected_10, ARRAY_LEN(actual10));
}
