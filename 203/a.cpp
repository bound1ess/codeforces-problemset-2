#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int x, t, a, b, da, db;
  scanf("%d%d%d%d%d%d", &x, &t, &a, &b, &da, &db);
  for (int i = 0; i < t; ++i) {
    for (int j = 0; j < t; ++j) {
      if ((a - da * i) + (b - db * j) == x || a - da * i == x || b - db * j == x) {
        puts("YES");
        return 0;
      }
    }
  }
  puts(0 < x ? "NO" : "YES");
  return 0;
}
