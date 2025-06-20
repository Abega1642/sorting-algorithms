int findMin(const int array[], const int size) {
    int min = array[0];
    for (int i = 0; i < size; i++) {
        if (min > array[i]) {
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


