#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m, l, r, len, x, one = 0;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    if (1 == x) {
      ++one;
    }
  }
  for (int i = 0; i < m; ++i) {
    scanf("%d%d", &l, &r);
    len = r - l + 1;
    if (len % 2 == 1) {
      puts("0");
      continue;
    }
    puts(len / 2 <= min(one, n - one) ? "1" : "0");
  }
  return 0;
}
