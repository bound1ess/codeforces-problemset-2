#include <cstdio>

const int N = 222, M = 3;

char s[N];
bool ok[M];
int cnt[M];

inline int get_idx(char c) {
  return 'B' == c ? 0 : ('G' == c ? 1 : 2);
}

inline char get_chr(int idx) {
  return 0 == idx ? 'B' : (1 == idx ? 'G' : 'R');
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d%s", &n, s);
  for (int i = 0; i < n; ++i) {
    ++cnt[get_idx(s[i])];
  }
  int zero = 0;
  for (int i = 0; i < M; ++i) {
    if (0 == cnt[i]) {
      ++zero;
    }
  }
  if (0 == zero) {
    for (int i = 0; i < M; ++i) {
      ok[i] = true;
    }
  } else if (2 == zero) {
    for (int i = 0; i < M; ++i) {
      if (0 < cnt[i]) {
        ok[i] = true;
      }
    }
  } else {
    int sum = 0;
    for (int i = 0; i < M; ++i) {
      sum += cnt[i];
    }
    for (int i = 0; i < M; ++i) {
      ok[i] = (sum - 1 != cnt[i]);
    }
  }
  for (int i = 0; i < M; ++i) {
    if (ok[i]) {
      putchar(get_chr(i));
    }
  }
  putchar('\n');
  return 0;
}
