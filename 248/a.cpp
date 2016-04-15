#include <cstdio>

const int N = 12345;
bool l[N], r[N];

inline int min(int a, int b) {
  return a < b ? a : b;
}

inline int opened(bool p) {
  return p ? 0 : 1;
}

inline int closed(bool p) {
  return p ? 1 : 0;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    int a, b;
    scanf("%d%d", &a, &b);
    l[i] = (1 == a);
    r[i] = (1 == b);
  }
  int a = 0, b = 0, c = 0, d = 0;
  for (int i = 0; i < n; ++i) {
    a += opened(l[i]) + opened(r[i]);
  }
  for (int i = 0; i < n; ++i) {
    b += closed(l[i]) + closed(r[i]);
  }
  for (int i = 0; i < n; ++i) {
    c += opened(l[i]) + closed(r[i]);
  }
  for (int i = 0; i < n; ++i) {
    d += closed(l[i]) + opened(r[i]);
  }
  printf("%d\n", min(a, min(b, min(c, d))));
  return 0;
}
