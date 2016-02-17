#include <cstdio>

const int N = 123, M = 5, HACK = 100, HACK_FAIL = 50;
char s[N][N];
int p[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, a, b, x, points;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%s%d%d", s[i], &a, &b);
    points = a * HACK - b * HACK_FAIL;
    for (int j = 0; j < M; ++j) {
      scanf("%d", &x);
      points += x;
    }
    p[i] = points;
  }
  int max = 0;
  for (int i = 1; i < n; ++i) {
    if (p[max] < p[i]) {
      max = i;
    }
  }
  printf("%s\n", s[max]);
  return 0;
}
