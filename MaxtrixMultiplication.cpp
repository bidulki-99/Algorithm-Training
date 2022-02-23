int C[N][N];

void matrix_multiple(int A[][N], int B[][N]) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        C[i][j] = A[i][k] * B[k][j];
      }
    }
  }
}
