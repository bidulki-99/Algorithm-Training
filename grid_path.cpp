int sum[N][N];
int value[N][N];

void solve(int n) {
    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            sum[y][x] = max(sum[y][x-1], sum[y-1][x]) + value[y][x];
        }
    }
}
