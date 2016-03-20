#include <cstdio>

const int N = 123;
int g[N][N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, a, b;
  scanf("%d%d%d", &n, &a, &b);
  int m = n, d = 1, r = 2;
  for (int i = 0; i < a && 0 < m && d <= n; ++i) {
    for (int j = i % 2; j < b && 0 < m && d <= n; j += 2, d += 2, --m) {
      g[i][j] = d;
    }
  }
  for (int i = 0; i < a && 0 < m; ++i) {
    for (int j = 1 - (i % 2); j < b && 0 < m; j += 2, r += 2, --m) {
      g[i][j] = r;
    }
  }
  if (0 < m) {
    puts("-1");
  } else {
    for (int i = 0; i < a; ++i) {
      for (int j = 0; j < b; ++j) {
        if (0 < j) {
          putchar(' ');
        }
        printf("%d", g[i][j]);
      }
      putchar('\n');
    }
  }
  return 0;
}
