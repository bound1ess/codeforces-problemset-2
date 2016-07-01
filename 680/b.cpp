#include <cstdio>

const int N = 101;
bool has[N];

inline int solve(int n, int a) {
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int d = i;
    if (0 < d && 0 <= a - d && a + d < n) {
      if (has[a - d] && has[a + d]) {
        ans += 2;
      }
    } else if (0 <= a - d) {
      if (has[a - d]) {
        ++ans;
      }
    } else if (a + d < n) {
      if (has[a + d]) {
        ++ans;
      }
    }
  }
  return ans;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, a;
  scanf("%d%d", &n, &a);
  --a;
  for (int i = 0; i < n; ++i) {
    int x;
    scanf("%d", &x);
    has[i] = 1 == x;
  }
  printf("%d\n", solve(n, a));
  return 0;
}
