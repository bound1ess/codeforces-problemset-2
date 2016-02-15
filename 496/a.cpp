#include <cstdio>

const int N = 123;

int a[N];

inline int solve(int n) {
  int min = int(1e9);
  for (int i = 0; i < n - 2; ++i) {
    int skip = i + 1, max = 0;
    for (int j = 0; j < n - 1; ++j) {
      if (skip == j) {
        continue;
      }
      int next_pos = j + 1;
      if (skip == next_pos) {
        ++next_pos;
      }
      int val = a[next_pos] - a[j];
      if (max < val) {
        max = val;
      }
    }
    if (max < min) {
      min = max;
    }
  }
  return min;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  printf("%d\n", solve(n));
  return 0;
}
