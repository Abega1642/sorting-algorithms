#include "../include/bubble_sort.h"

#include <stddef.h>
#include <stdbool.h>

void bubbleSort(int *arr, const size_t size) {
    if (arr == NULL || size < 2) {
        return;
    }

    for (size_t i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

