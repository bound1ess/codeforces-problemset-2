#include <cstdio>

const int N = 222;

char s[N];
int x[N], y[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, ans = 0;
  scanf("%d%s", &n, s);
  for (int i = 0; i < n; ++i) {
    x[i + 1] = x[i] + (s[i] == 'L' ? -1 : (s[i] == 'R' ? 1 : 0));
    y[i + 1] = y[i] + (s[i] == 'D' ? -1 : (s[i] == 'U' ? 1 : 0));
  }
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j <= n; ++j) {
      if (x[i] == x[j] && y[i] == y[j]) {
        ++ans;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
