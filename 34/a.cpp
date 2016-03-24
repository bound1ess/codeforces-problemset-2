#include <cstdio>

const int N = 123;
int a[N];

inline int dist(int x, int y) {
  int z = x - y;
  return z < 0 ? -z : z;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  int l = 0, r = n - 1;
  int min = dist(a[0], a[n - 1]);
  for (int i = 0; i < n - 1; ++i) {
    int d = dist(a[i], a[i + 1]);
    if (d < min) {
      min = d;
      l = i, r = i + 1;
    }
  }
  printf("%d %d\n", l + 1, r + 1);
  return 0;
}
