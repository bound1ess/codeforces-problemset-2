#include <cstdio>

const int N = 1234;
int a[N], b[N];

inline void restore(int m) {
  for (int i = 0; i < m; ++i) {
    a[i] = b[i];
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < m; ++i) {
    scanf("%d", a + i);
    b[i] = a[i];
  }
  int max_val = 0;
  for (int i = 0; i < n; ++i) {
    int max_idx = -1;
    for (int j = 0; j < m; ++j) {
      if (0 < a[j] && (max_idx == -1 || a[max_idx] < a[j])) {
        max_idx = j;
      }
    }
    max_val += a[max_idx];
    --a[max_idx];
  }
  int min_val = 0;
  restore(m);
  for (int i = 0; i < n; ++i) {
    int min_idx = -1;
    for (int j = 0; j < m; ++j) {
      if (0 < a[j] && (min_idx == -1 || a[j] < a[min_idx])) {
        min_idx = j;
      }
    }
    min_val += a[min_idx];
    --a[min_idx];
  }
  printf("%d %d\n", max_val, min_val);
  return 0;
}
