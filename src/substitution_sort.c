#include "../include/substitution_sort.h"
#include "../include/util.h"

void substitutionSort(int array[], const int arraySize) {
    const int maximumValue = findMax(array, arraySize);
    int sortedArray[arraySize];
    for (int i = 0; i < arraySize; i++) {
        const int min = findMin(array, arraySize);
        for (int j = 0; j < arraySize; j++) {
            if (min == array[j]) {
                sortedArray[i] = array[j];
                array[j] = maximumValue;
            }
        }
    }
    for (int i = 0; i < arraySize; i++) {
        array[i] = sortedArray[i];
    }
}


