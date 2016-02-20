#include <cstdio>

const int N = 123456;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k;
  scanf("%d%d", &n, &k);
  --k;
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  for (int i = k + 1; i < n; ++i) {
    if (a[k] != a[i]) {
      puts("-1");
      return 0;
    }
  }
  for (int i = k - 1; 0 <= i; --i) {
    if (a[k] != a[i]) {
      printf("%d\n", i + 1);
      return 0;
    }
  }
  puts("0");
  return 0;
}
