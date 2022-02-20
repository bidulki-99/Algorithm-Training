// O(n^3)
void MaximumSubarraySum1(int array[], int n) {
    int best = 0, sum;
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            sum = 0;
            for (int k = a; k <= b; k++) {
                sum += array[k];
            }
        }
        best = max(best, sum);
    }
    cout << best << "\n";
}

// O(n^2)
void MaximumSubarraySum2(int array[], int n) {
    int best = 0, sum;
    for (int a = 0; a < n; a++) {
        sum = 0;
        for (int b = a; b < n; b++) {
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}

// O(n)
void MaximumSubarraySum3(int array[], int n) {
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
