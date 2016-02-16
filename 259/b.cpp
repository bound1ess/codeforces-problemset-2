#include <cstdio>

const int N = 3, UP = 100 * 1000;
int g[N][N], r[N], c[N];

inline bool solve(int x) {
  g[0][0] = x;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      r[i] += g[i][j];
      c[i] += g[j][i];
    }
    if (0 < i) {
      g[i][i] = r[i - 1] - r[i];
      if (g[i][i] <= 0) {
        return false;
      }
      r[i] += g[i][i];
      c[i] += g[i][i];
    }
    if (r[i] != c[i]) {
      return false;
    }
  }
  int diag_sum = 0;
  for (int i = 0; i < N; ++i) {
    diag_sum += g[i][i];
  }
  return diag_sum == r[0];
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      scanf("%d", g[i] + j);
    }
  }
  for (int i = 1; i <= UP; ++i) {
    if (solve(i)) {
      break;
    }
    // reset grid state
    for (int j = 0; j < N; ++j) {
      g[j][j] = 0;
      r[j] = 0;
      c[j] = 0;
    }
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (0 < j) {
        putchar(' ');
      }
      printf("%d", g[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
