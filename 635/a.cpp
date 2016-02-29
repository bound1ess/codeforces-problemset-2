#include <cstdio>

const int N = 123;
bool g[N][N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int h, w, n, k;
  scanf("%d%d%d%d", &h, &w, &n, &k);
  for (int i = 0; i < n; ++i) {
    int x, y;
    scanf("%d%d", &y, &x);
    g[y - 1][x - 1] = true;
  }
  int ans = 0;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      for (int q = i; q < h; ++q) {
        for (int u = j; u < w; ++u) {
          int res = 0;
          for (int v = i; v <= q; ++v) {
            for (int t = j; t <= u; ++t) {
              if (g[v][t]) {
                ++res;
              }
            }
          }
          if (k <= res) {
            ++ans;
          }
        }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
