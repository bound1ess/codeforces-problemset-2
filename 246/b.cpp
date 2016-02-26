#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x, s = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    s += x;
  }
  printf("%d\n", s % n == 0 ? n : n - 1);
  return 0;
}
