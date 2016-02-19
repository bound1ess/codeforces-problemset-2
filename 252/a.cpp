#include <cstdio>

const int N = 123;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      int res;
      for (int k = i; k <= j; ++k) {
        if (i < k) {
          res ^= a[k];
        } else {
          res = a[k];
        }
      }
      if (ans < res) {
        ans = res;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
