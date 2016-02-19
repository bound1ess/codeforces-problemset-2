#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k, l, r, p = 0;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &l, &r);
    p += r - l + 1;
  }
  printf("%d\n", (k - (p % k)) % k);
  return 0;
}
