#include <cstdio>

const int CIRCLE = 360;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    puts(CIRCLE % (CIRCLE / 2 - x) == 0 ? "YES" : "NO");
  }
  return 0;
}
