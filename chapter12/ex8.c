void store_zeros(int a[], int n) {
    for (int *p = a; p < a + n; p++) {
        *p = 0;
    }
}
