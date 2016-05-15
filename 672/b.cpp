#include <cstdio>

const int N = 123456, ALPHA = 26;
char s[N];
int c[ALPHA];

inline int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d%s", &n, s);
  if (ALPHA < n) {
    puts("-1");
    return 0;
  }
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    ++c[s[i] - 'a'];
  }
  for (int i = 0; i < ALPHA; ++i) {
    cnt += min(1, c[i]);
  }
  printf("%d\n", n - cnt);
  return 0;
}
