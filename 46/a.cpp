#include <cstdio>

const int N = 123;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  int curr_child = 1, jump = 1;
  for (int i = 0; i < n - 1; ++i) {
    if (curr_child + jump <= n) {
      curr_child += jump;
    } else {
      curr_child = curr_child + jump - n;
    }
    a[i] = curr_child, ++jump;
  }
  for (int i = 0; i < n - 1; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", a[i]);
  }
  putchar('\n');
  return 0;
}
