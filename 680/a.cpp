#include <cstdio>

const int N = 5, M = 101, JUNK = 1010101010, L = 2, R = 3;
int val[M];

inline int min(int x, int y) {
  return x < y ? x : y;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int s = 0, ans = JUNK;
  for (int i = 0; i < N; ++i) {
    int x;
    scanf("%d", &x);
    ++val[x], s += x;
  }
  for (int i = 0; i < M; ++i) {
    if (L <= val[i] && val[i] <= R) {
      ans = min(ans, s - i * val[i]);
    }
    if (R < val[i]) {
      ans = min(ans, s - i * R);
    }
  }
  printf("%d\n", JUNK == ans ? s : ans);
  return 0;
}
