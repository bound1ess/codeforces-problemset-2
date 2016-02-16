#include <cstdio>

const int N = 12345;
int a[N], b[N], c[N], d[N], sc[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int p, q, l, r;
  scanf("%d%d%d%d", &p, &q, &l, &r);
  for (int i = 0; i < p; ++i) {
    scanf("%d%d", a + i, b + i);
  }
  for (int i = 0; i < q; ++i) {
    scanf("%d%d", c + i, d + i);
  }
  int ans = 0;
  for (int i = l; i <= r; ++i) {
    for (int j = 0; j < p; ++j) {
      for (int k = a[j]; k <= b[j]; ++k) {
        ++sc[k];
      }
    }
    for (int j = 0; j < q; ++j) {
      for (int k = c[j]; k <= d[j]; ++k) {
        ++sc[i + k];
      }
    }
    for (int j = 0; j < N; ++j) {
      if (1 < sc[j]) {
        ++ans;
        break;
      }
    }
    // reset
    for (int j = 0; j < N; ++j) {
      sc[j] = 0;
    }
  }
  printf("%d\n", ans);
  return 0;
}
