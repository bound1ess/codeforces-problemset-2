#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x, v25 = 0, v50 = 0, v100 = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    ++(25 == x ? v25 : (50 == x ? v50 : v100));
    if (25 == x) {
      continue;
    }
    if (50 == x) {
      if (0 < v25) {
        --v25;
      } else {
        puts("NO");
        return 0;
      }
      continue;
    }
    // 100 == x
    if (0 < v25 && 0 < v50) {
      --v25, --v50;
    } else if (3 <= v25) {
      v25 -= 3;
    } else {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}
