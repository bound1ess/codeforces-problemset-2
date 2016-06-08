#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if (0 == c) {
    puts(a == b ? "YES" : "NO");
  } else {
    puts(0 == (b - a) % c && 0 <= (b - a) / c ? "YES" : "NO");
  }
  return 0;
}
