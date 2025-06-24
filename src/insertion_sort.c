#include "../include/insertion_sort.h"
#include <stddef.h>

void insertion_sort(int *array, const size_t size) {
    if (array == NULL || size < 2) {
        return;
    }

    for (size_t i = 1; i < size; ++i) {
        const int key = array[i];
        size_t j = i;

        while (j > 0 && array[j - 1] > key) {
            array[j] = array[j - 1];
            --j;
        }

        array[j] = key;
    }
}

