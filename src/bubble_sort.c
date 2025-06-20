#include "../include/buble_sort.h"

void bubbleSort(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        int max = arr[0];
        for (int j = 1; j < size; j++) {
            if (max > arr[j]) {
                arr[j - 1] = arr[j];
                arr[j] = max;
            } else {
                max = arr[j];
            }
        }
    }
}

