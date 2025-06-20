#include <assert.h>
#include "../include/buble_sort.h"
#include "../include/test_buble_sort.h"


void test_buble_sort_size_15() {
    int arr[] = {-5, -5, -15, -2, 5, 1, 1, 4, 2, 10, 10};
    bubbleSort(arr, 11);
    assert(arr[0] == -15 && arr[10] == 10);
}

void test_buble_sort_size_7() {
    int arr[] = {5, 3, 2, 1, 4, 0, -1};
    bubbleSort(arr, 7);
    assert(arr[0] == -1 && arr[6] == 5);
}

void test_buble_sort_size_0() {
    int arr[] = {};
    bubbleSort(arr, 0);
    assert(sizeof(arr) == 0);
}

void lunch_buble_sort_tests() {
    test_buble_sort_size_0();
    test_buble_sort_size_7();
    test_buble_sort_size_15();
}
