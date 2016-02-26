#include <cstdio>

const int N = 3003;
int x[N];

inline int max(int a, int b) {
  return a < b ? b : a;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, v, a, b;
  scanf("%d%d", &n, &v);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &a, &b);
    x[a] += b;
  }
  int s = 0, ans = 0;
  for (int i = 1; i < N; ++i) {
    if (x[i] + s <= v) {
      ans += s + x[i];
      s = 0;
    } else {
      ans += v;
      s = x[i] - max(v - s, 0);
    }
  }
  printf("%d\n", ans);
  return 0;
}
