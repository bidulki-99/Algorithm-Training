int string_hamming(string a, string b) {
    int d = 0;
    int k = a.length();
    for (int i = 0; i < k; i++) {
        if (a[i] != b[i]) d++;
    }
    return d;
}

int integer_hamming(int a, int b) {
    return __builtin_popcount(a ^ b);
}
