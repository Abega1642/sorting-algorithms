void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int max = arr[0];
        for (int j = 1; j < n; j++) {
            if (max > arr[j]) {
                arr[j - 1] = arr[j];
                arr[j] = max;
            } else {
                max = arr[j];
            }
        }
    }
}

