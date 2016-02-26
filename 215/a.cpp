#include <cstdio>

const int N = 123;
int a[N], b[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  scanf("%d", &m);
  for (int i = 0; i < m; ++i) {
    scanf("%d", b + i);
  }
  int max_rat = int(-1e9);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (b[j] % a[i] == 0 && max_rat < b[j] / a[i]) {
        max_rat = b[j] / a[i];
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (b[j] % a[i] == 0 && b[j] / a[i] == max_rat) {
        ++ans;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
