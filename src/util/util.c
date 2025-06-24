#include "../../include/util.h"
#include <stddef.h>

int find_max(const int *array, const size_t size) {
    if (array == NULL || size == 0) {
        return 0;
    }

    int max = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int find_min(const int *array, const size_t size) {
    if (array == NULL || size == 0) {
        return 0;
    }

    int min = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}