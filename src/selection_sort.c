#include "../include/selection_sort.h"
#include "../include/util.h"

void selectionSort(int array[], const int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        const int min = findMinWithIndexes(array, i, arraySize);
        for (int j = 0; j < arraySize - 1; j++) {
            if (array[j] ==  min) {
                array[j] = array[i];
                array[i] = min;
            }
        }
    }
}

