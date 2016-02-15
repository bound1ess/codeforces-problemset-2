#include <cstdio>

const int N = 123456;

int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x = 0, y = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < n; ++i) {
    if (a[i] == i) {
      ++x;
    } else if (a[a[i]] == i) {
      y = 1;
    }
  }
  int val = x + y + 1;
  printf("%d\n", n < val ? n : val);
  return 0;
}
