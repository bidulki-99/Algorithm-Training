int ans;
int col[10000], diag1[10000], diag2[10000];

void nQueen(int y, int n) {
    if (y == n) {
        ans++;
        return;
    }
    
    for (int x = 0; x < n; x++) {
        if (col[x] || diag1[x + y] || diag2[x - y + n - 1])
            continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        nQueen(y + 1, n);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}
