#include <cstdio>

const int UP = 222111;
bool pre[UP], added[UP];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    int x;
    scanf("%d", &x);
    if (x < UP) {
      pre[x] = true;
    }
  }
  for (int i = 1; i < UP && i <= m; ++i) {
    if (!pre[i]) {
      added[i] = true;
      m -= i;
    }
  }
  int cnt = 0;
  for (int i = 1; i < UP; ++i) {
    if (added[i]) {
      ++cnt;
    }
  }
  printf("%d\n", cnt);
  if (0 < cnt) {
    bool first = true;
    for (int i = 1; i < UP; ++i) {
      if (added[i]) {
        if (first) {
          first = false;
        } else {
          putchar(' ');
        }
        printf("%d", i);
      }
    }
    putchar('\n');
  }
  return 0;
}
