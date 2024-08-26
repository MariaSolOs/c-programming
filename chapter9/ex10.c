int largest(int arr[], int n) {
    int largest = -1;
    for (int i = 0; i < n; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }
    return largest;
}

float average(int arr[], int n) {
    float avg = 0.0f;
    for (int i = 0; i < n; i++) {
        avg += arr[i];
    }
    return avg / n;
}

int num_positive(int arr[], int n) {
    int num_pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            num_pos++;
        }
    }
    return num_pos;
}
