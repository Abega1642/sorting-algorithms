#include <assert.h>
#include "../include/insertion_sort.h"
#include "../include/test_insert_sort.h"

void test_insert_sort_size_15() {
    int arr[] = {-5, -5, -15, -2, 5, 1, 1, 4, 2, 10, 10};
    insertionSort(arr, 11);
    assert(arr[0] == -15 && arr[10] == 10);
}

void test_insert_sort_size_7() {
    int arr[] = {5, 3, 2, 1, 4, 0, -1};
    insertionSort(arr, 7);
    assert(arr[0] == -1 && arr[6] == 5);
}

void test_insert_sort_size_0() {
    int arr[] = {};
    insertionSort(arr, 0);
    assert(sizeof(arr) == 0);
}

void lunch_insert_sort_tests() {
    test_insert_sort_size_0();
    test_insert_sort_size_7();
    test_insert_sort_size_15();
}