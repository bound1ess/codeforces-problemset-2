#include <cstdio>

const int N = 101, MAGIC = 2400;
char s[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  bool ok = false;
  for (int i = 0; i < n; ++i) {
    int x, y;
    scanf("%s%d%d", s, &x, &y);
    if (MAGIC <= x && x < y) {
      ok = true;
    }
  }
  puts(ok ? "YES" : "NO");
  return 0;
}
