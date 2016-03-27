#include <cstdio>

const int N = 1234;
int a[N];

inline void swap_next(int pos) {
  int val = a[pos];
  a[pos] = a[pos + 1];
  a[pos + 1] = val;
}

inline void z_sort(int n) {
  for (int i = 1; i < n; ++i) {
    if ((i + 1) % 2 == 0) {
      if (a[i] < a[i - 1]) {
        swap_next(i - 1);
      }
    } else {
      if (a[i - 1] < a[i]) {
        swap_next(i - 1);
      }
    }
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  z_sort(n);
  for (int i = 0; i < n; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", a[i]);
  }
  putchar('\n');
  return 0;
}
