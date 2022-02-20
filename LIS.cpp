int length[N];

void LIS(int array[], int n) {
    for (int k = 0; k < n; k++) {
        length[k] = 1;
        for (int i = 0; i < k; i++) {
            if (array[i] < array[k]) {
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }
}
