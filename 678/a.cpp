#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k;
  scanf("%d%d", &n, &k);
  int q = n / k;
  printf("%d\n", q * k == n ? n + k : k * (q + 1));
  return 0;
}
