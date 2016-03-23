#include <cstdio>

const int N = 1234;
bool deny[N][N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < m; ++i) {
    int u, v;
    scanf("%d%d", &u, &v);
    --u, --v;
    deny[u][v] = deny[v][u] = true;
  }
  for (int i = 0; i < n; ++i) {
    bool good = true;
    for (int j = 0; j < n; ++j) {
      if (deny[i][j]) {
        good = false;
        break;
      }
    }
    if (good) {
      printf("%d\n", n - 1);
      for (int j = 0; j < n; ++j) {
        if (i != j) {
          printf("%d %d\n", i + 1, j + 1);
        }
      }
      return 0;
    }
  }
  return 0;
}
