#include <cstdio>
#include <cstring>

const int N = 1234, M = 26;
char s[N];
int c[M];

inline bool win() {
  int odd = 0;
  for (int i = 0; i < M; ++i) {
    if (c[i] % 2 == 1) {
      ++odd;
    }
  }
  return odd <= 1;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s", s);
  int n = int(strlen(s));
  for (int i = 0; i < n; ++i) {
    ++c[s[i] - 'a'];
  }
  bool fp = true;
  while (true) {
    if (win()) {
      puts(fp ? "First" : "Second");
      break;
    }
    bool even = false;
    for (int i = 0; i < M; ++i) {
      if (0 < c[i] && c[i] % 2 == 0) {
        even = true;
        --c[i];
        break;
      }
    }
    if ( ! even) {
      // probably lost
      for (int i = 0; i < M; ++i) {
        if (c[i] % 2 == 1) {
          --c[i];
          break;
        }
      }
    }
    fp = ! fp;
  }
  return 0;
}
