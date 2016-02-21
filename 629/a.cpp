#include <cstdio>

const int N = 123;
char s[N][N];
int rows[N], cols[N];

inline int pairs(int x) {
  return x * (x - 1) / 2;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (s[i][j] == 'C') {
        ++rows[i];
      }
      if (s[j][i] == 'C') {
        ++cols[i];
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += pairs(rows[i]);
    ans += pairs(cols[i]);
  }
  printf("%d\n", ans);
  return 0;
}
