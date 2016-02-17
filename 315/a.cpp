#include <cstdio>

const int N = 123456;
int a[N], b[N];
bool c[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", a + i, b + i);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (b[i] == a[j] && i != j) {
        c[j] = true;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if ( ! c[i]) {
      ++ans;
    }
  }
  printf("%d\n", ans);
  return 0;
}
