
#include <stdio.h>

void insertionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            const int min = array[i + 1];
            int k = 0;
            while (i - k >= 0) {
                if (array[i - k] > min) {
                    array[i - k + 1] = array[i - k];
                    array[i - k] = min;
                }
                k++;
            }
        }
    }
}


