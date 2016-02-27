#include <cstdio>

const int N = 123456;
int home_c[N], away_c[N], home[N], away[N], cnt[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", home_c + i, away_c + i);
  }
  for (int i = 0; i < n; ++i) {
    ++cnt[home_c[i]];
  }
  for (int i = 0; i < n; ++i) {
    home[i] = n - 1 + cnt[away_c[i]];
    away[i] = 2 * (n - 1) - home[i];
  }
  for (int i = 0; i < n; ++i) {
    printf("%d %d\n", home[i], away[i]);
  }
  return 0;
}
