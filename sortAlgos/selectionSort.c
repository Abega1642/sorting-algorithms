#include <stdio.h>

int findMin2(int array[], int minIndex, int maxIndex) {
    int min = array[minIndex];
    for (int i = minIndex; i < maxIndex; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

void selectionSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        int min = findMin2(array, i, arraySize);
        for (int j = 0; j < arraySize - 1; j++) {
            if (array[j] ==  min) {
                array[j] = array[i];
                array[i] = min;
            }
        }
    }
}

