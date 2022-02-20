int tree[N];

int sum(int k) {
    int s = 0;
    while (k >= 1) {
        s += tree[k];
        k -= k & -k;
    }
    return s;
}

void add(int k, int n, int x) {
    while (k <= n) {
        tree[k] += x;
        k += k & -k;
    }
}
