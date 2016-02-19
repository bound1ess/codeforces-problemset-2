#include <cstdio>

inline double dpow(double bs, int exp) {
  double ans = 1.0;
  while (0 < exp) {
    if (exp % 2 == 1) {
      ans *= bs;
    }
    bs *= bs;
    exp /= 2;
  }
  return ans;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &m, &n);
  double ans = 0.0;
  for (int i = 0; i < m; ++i) {
    ans += dpow(double(i) / m, n);
  }
  printf("%.12f\n", double(m) - ans);
  return 0;
}
