#include <cstdio>

inline int max_pow(int x) {
  int ans = 1;
  while (ans * 2 <= x) {
    ans *= 2;
  }
  return ans;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, b, p;
  scanf("%d%d%d", &n, &b, &p);
  int m = n, cnt = 0;
  while (1 < m) {
    int k = max_pow(m);
    cnt += k / 2 * (b * 2 + 1);
    m = k / 2 + m - k;
  }
  printf("%d %d\n", cnt, n * p);
  return 0;
}
