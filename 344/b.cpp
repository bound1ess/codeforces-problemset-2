#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  for (int i = 0; i <= a && i <= b; ++i) {
    if (a + b - i * 2 == c) {
      printf("%d %d %d\n", i, b - i, a - i);
      return 0;
    }
  }
  puts("Impossible");
  return 0;
}
