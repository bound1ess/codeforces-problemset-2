#include <cstdio>
#include <cmath>

inline int sq(int x) {
  return x * x;
}

inline bool is_perfect(int x, int &val) {
  int k = int(sqrt(x));
  val = k;
  return k * k == x;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, ans = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    for (int j = i; j <= n; ++j) {
      int s = sq(i) + sq(j), sqrt_val;
      if (is_perfect(s, sqrt_val)) {
        if (sqrt_val <= n) {
          ++ans;
        } else {
          break;
        }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
