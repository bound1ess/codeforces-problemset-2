#include  <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int k, d;
  scanf("%d%d", &k, &d);
  if (d == 0) {
    puts(k == 1 ? "0" : "No solution");
  } else {
    printf("%d", d);
    for (int i = 0; i < k - 1; ++i) {
      putchar('0');
    }
    putchar('\n');
  }
  return 0;
}
