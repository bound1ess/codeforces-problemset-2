#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, h, x, ans = 0;
  scanf("%d%d", &n, &h);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    ans += 2 - int(x <= h);
  }
  printf("%d\n", ans);
  return 0;
}
