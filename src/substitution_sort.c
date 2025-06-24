#include "../include/substitution_sort.h"
#include "../include/util.h"
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

void substitution_sort(int *array, const size_t size) {
    if (array == NULL || size < 2) {
        return;
    }

    int *sorted = malloc(sizeof(int) * size);
    if (!sorted) {
        return;
    }

    const int max = find_max(array, size);

    for (size_t i = 0; i < size; ++i) {
        int min = INT_MAX;
        size_t min_index = size;

        for (size_t j = 0; j < size; ++j) {
            if (array[j] < min) {
                min = array[j];
                min_index = j;
            }
        }

        sorted[i] = min;

        array[min_index] = max + 1;
    }

    for (size_t i = 0; i < size; ++i) {
        array[i] = sorted[i];
    }

    free(sorted);
}
