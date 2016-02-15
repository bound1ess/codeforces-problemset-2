#include <cstdio>

const int N = 1234567;

int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m, x, off = 1, label = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    for (int j = 0; j < x; ++j) {
      a[off + j] = label;
    }
    ++label, off += x;
  }
  scanf("%d", &m);
  for (int i = 0; i < m; ++i) {
    scanf("%d", &x);
    printf("%d\n", a[x]);
  }
  return 0;
}
