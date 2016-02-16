#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  bool go = (0 == n);
  while (0 < n || go) {
    go = false;
    int val = n % 10;
    n /= 10;
    if (5 <= val) {
      val -= 5;
      printf("-O|");
    } else {
      printf("O-|");
    }
    int free = 4;
    while (0 < val) {
      --free, --val;
      putchar('O');
    }
    putchar('-');
    for (int i = 0; i < free; ++i) {
      putchar('O');
    }
    putchar('\n');
  }
  return 0;
}
