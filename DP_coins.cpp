bool ready[N];
int value[N];

// recursion
int solve1(int x) {
    if (x < 0) return 1 << 31 - 1;
    if (x == 0) return 0;
    if (ready[x]) return value[x];
    int best = 1 << 31 - 1;
    for (auto c: coins) {
        best = min(best, solve(x-c) + 1);
    }
    ready[x] = true;
    value[x] = best;
    return best;
}

// iteration
int solve2(int x) {
    value[0] = 0;
    for (int x = 1; x <= n; x++) {
        value[x] = 1 << 31 - 1;
        for (auto c: coins) {
            if (x-c >= 0) {
                value[x] = min(value[x], value[x-c] + 1);
            }
        }
    }
}
