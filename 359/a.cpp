#include <cstdio>

const int N = 123;
bool g[N][N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m, x;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &x);
      g[i][j] = (x == 1);
    }
  }
  bool easy = false;
  for (int i = 0; i < n && ! easy; ++i) {
    for (int j = 0; j < m; ++j) {
      if (g[i][j]) {
        if (j == 0 || j == m - 1 || i == 0 || i == n - 1) {
          easy = true;
          break;
        }
      }
    }
  }
  printf("%d\n", easy ? 2 : 4);
  return 0;
}
