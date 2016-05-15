#include <cstdio>

const int N = 400, M = 1200;
char s[M];

inline void build() {
  int pos = 0;
  for (int i = 1; i < N; ++i) {
    int x = i, k = 0;
    while (0 < x) {
      s[pos] = '0' + (x % 10);
      x /= 10;
      ++pos, ++k;
    }
    for (int l = pos - k, r = pos - 1; l < r; ++l, --r) {
      char c = s[l];
      s[l] = s[r], s[r] = c;
    }
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  build();
  printf("%c\n", s[n - 1]);
  return 0;
}
