#include <cstdio>

const int N = 123;
char s[N][N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m - 1; ++j) {
      if (s[i][j] != s[i][j + 1]) {
        puts("NO");
        return 0;
      }
    }
  }
  for (int i = 0; i < n - 1; ++i) {
    if (s[i][0] == s[i + 1][0]) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}
