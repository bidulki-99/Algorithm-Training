bool ready[N];
int value[N];
int first[N];
int count[N];

void print_solve(int x) {
    value[0] = 0;
    for (int x = 1; x <= n; x++) {
        value[x] = 1 << 31 - 1;
        for (auto c: coins) {
            if (x-c >= 0 && value[x-c] + 1 < value[x]) {
                value[x] = min(value[x], value[x-c] + 1);
                first[x] = c;
            }
        }
    }

    while (n > 0) {
        cout << first[n] << "\n";
        n -= first[n];
    }
}

void count_solve(int x) {
    count[0] = 1;
    for (int x = 1; x <= n; x++) {
        for (auto c: coins) {
            if (x-c >= 0) {
                count[x] += count[x-c];
                // count[x] %= m;
            }
        }
    }
}
