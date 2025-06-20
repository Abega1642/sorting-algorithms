#include <assert.h>
#include "../include/selection_sort.h"
#include "../include/test_selection_sort.h"


void test_selection_sort_size_15() {
    int arr[] = {-5, -5, -15, -2, 5, 1, 1, 4, 2, 10, 10};
    selectionSort(arr, 11);
    assert(arr[0] == -15 && arr[10] == 10);
}

void test_selection_sort_size_6() {
    int arr[] = {5, 3, 2, 1, 4, 0};
    selectionSort(arr, 6);
    assert(arr[0] == 0 && arr[5] == 5);
}

void test_selection_sort_size_0() {
    int arr[] = {};
    selectionSort(arr, 0);
    assert(sizeof(arr) == 0);
}

void lunch_selection_sort_tests() {
    test_selection_sort_size_0();
    test_selection_sort_size_15();
}
