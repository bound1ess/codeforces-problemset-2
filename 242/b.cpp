#include <cstdio>

const int N = 123456;
int l[N], r[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  int low = int(1e9);
  int high = -low;
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", l + i, r + i);
    if (l[i] < low) {
      low = l[i];
    }
    if (high < r[i]) {
      high = r[i];
    }
  }
  for (int i = 0; i < n; ++i) {
    if (l[i] <= low && high <= r[i]) {
      printf("%d\n", i + 1);
      return 0;
    }
  }
  puts("-1");
  return 0;
}
