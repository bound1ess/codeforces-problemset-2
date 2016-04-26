#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, take = 1, ans = 0;
  scanf("%d", &n);
  while (take <= n) {
    n -= take;
    ++ans;
    take = (take == 1 ? 2 : 1);
  }
  printf("%d\n", ans);
  return 0;
}
