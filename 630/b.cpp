#include <cstdio>
#include <cmath>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, t;
  scanf("%d%d", &n, &t);
  printf("%.17f\n", pow(1.000000011, t) * n);
  return 0;
}
