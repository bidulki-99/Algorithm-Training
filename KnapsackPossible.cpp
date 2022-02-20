bool possible1D[N];
bool possible2D[N][N];
int w[N];

void KnapsackPossible2D(int n, int m) {
    //m : total of weights
    possible2D[0][0] = true;
    for (int k = 1; k <= n; k++) {
        for (int x = 0; x <= m; x++) {
            if (x-w[k] >= 0) {
                possible2D[x][k] |= possible2D[x-w[k]][k-1];
            }
            possible2D[x][k] |= possible2D[x][k-1];
        }
    }
}

void KnapsackPossible1D(int n, int m) {
    possible1D[0] = true;
    for (int k = 1; k <= n; k++) {
        for (int x = m-w[k]; x >= 0; x--) {
            possible1D[x+w[k]] |= possible1D[x];
        }
    }
}
