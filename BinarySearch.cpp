int binarySearch(int x, int a[], int n) {
    int k = 0;
    for (int i = n / 2; i >= 1; i /= 2)
        while (k + i < n && a[k + i] <= x)
            k += i;
    if (a[k] == x)
        return k;
    return -1;
}
