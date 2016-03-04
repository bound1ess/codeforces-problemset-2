#include <cstdio>

const int N = 123456, M = 5555;
int a[N], r_upd[M], c_upd[M];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m, k;
  scanf("%d%d%d", &n, &m, &k);
  for (int i = 0; i < n; ++i) {
    r_upd[i] = -1;
  }
  for (int i = 0; i < m; ++i) {
    c_upd[i] = -1;
  }
  for (int i = 0; i < k; ++i) {
    int t, idx;
    scanf("%d%d%d", &t, &idx, a + i);
    --idx;
    if (t == 1) {
      r_upd[idx] = i;
    } else {
      c_upd[idx] = i;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (0 < j) {
        putchar(' ');
      }
      if (r_upd[i] != -1 || c_upd[j] != -1) {
        int c = r_upd[i] < c_upd[j] ? c_upd[j] : r_upd[i];
        printf("%d", a[c]);
      } else {
        putchar('0');
      }
    }
    putchar('\n');
  }
  return 0;
}
