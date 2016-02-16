#include <cstdio>

const int N = 5;
int g[N][N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      scanf("%d", g[i] + j);
    }
  }
  int ans = 0;
  // never do that at home
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (j == i) {
        continue;
      }
      for (int k = 0; k < N; ++k) {
        if (k == i || k == j) {
          continue;
        }
        for (int q = 0; q < N; ++q) {
          if (q == i || q == j || q == k) {
            continue;
          }
          for (int z = 0; z < N; ++z) {
            if (z == i || z == j || z == k || z == q) {
              continue;
            }
            int res = 0;
            res += g[i][j] + g[j][i];
            res += g[j][k] + g[k][j];
            res += (g[k][q] + g[q][k]) * 2;
            res += (g[q][z] + g[z][q]) * 2;
            if (ans < res) {
              ans = res;
            }
          }
        }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
