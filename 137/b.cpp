#include <cstdio>

const int N = 5432;
bool c[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    c[x] = true;
  }
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    if (c[i]) {
      ++ans;
    }
  }
  printf("%d\n", n - ans);
  return 0;
}
