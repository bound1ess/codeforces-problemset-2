#include <cstdio>

const int N = 123;
int a[N];

inline int abs(int x) {
  return x < 0 ? -x : x;
}

inline int pick(int x, int y) {
  return x < y ? y : x;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, min = 0, max = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
    if (a[max] < a[i]) {
      max = i;
    }
    if (a[i] < a[min]) {
      min = i;
    }
  }
  printf("%d\n", pick(pick(min, abs(n - min - 1)), pick(max, abs(n - max - 1))));
  return 0;
}
