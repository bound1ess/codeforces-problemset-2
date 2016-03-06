#include <cstdio>

inline int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int k, a, b, v;
  scanf("%d%d%d%d", &k, &a, &b, &v);
  int ans = 0;
  while (true) {
    int cnt = ans + min(b, ans * (k - 1));
    if (a <= v * cnt) {
      break;
    }
    ++ans;
  }
  printf("%d\n", ans);
  return 0;
}
