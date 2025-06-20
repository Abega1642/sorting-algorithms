#include "../../include/util.h"

int findMin(const int array[], const int size) {
    int min = array[0];
    for (int i = 0; i < size; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int findMinWithIndexes(const int array[], const int minInd, const int maxInd) {
    int min = array[minInd];
    for (int i = minInd; i < maxInd; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int findMax(const int array[], const int size) {
    int max = array[0];
    for (int i = 0; i < size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}