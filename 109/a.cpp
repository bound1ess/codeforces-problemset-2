#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = n / 7; 0 <= i; --i) {
    int j = n - i * 7;
    if (j % 4 == 0) {
      for (int k = 0; k < j / 4; ++k) {
        putchar('4');
      }
      for (int k = 0; k < i; ++k) {
        putchar('7');
      }
      putchar('\n');
      return 0;
    }
  }
  puts("-1");
  return 0;
}
