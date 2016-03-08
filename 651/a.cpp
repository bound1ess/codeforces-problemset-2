#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int a, b, ans = 0;
  scanf("%d%d", &a, &b);
  while (true) {
    if (b < a) {
      int c = a;
      a = b;
      b = c;
    }
    if (a < 1 || b <= 1) {
      break;
    }
    ++a;
    if (100 < a) {
      a = 100;
    }
    ++ans;
    b -= 2;
  }
  printf("%d\n", ans);
  return 0;
}
