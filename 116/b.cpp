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
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (s[i][j] != 'W') {
        continue;
      }
      int x, y;
      bool pig = false;
      if (0 < i && s[i - 1][j] == 'P') {
        pig = true;
        x = j, y = i - 1;
      } else if (i + 1 < n && s[i + 1][j] == 'P') {
        pig = true;
        x = j, y = i + 1;
      } else if (0 < j && s[i][j - 1] == 'P') {
        pig = true;
        x = j - 1, y = i;
      } else if (j + 1 < m && s[i][j + 1] == 'P') {
        pig = true;
        x = j + 1, y = i;
      }
      if (pig) {
        s[y][x] = '#';
        ++ans;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
