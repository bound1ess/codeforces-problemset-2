#include <cstdio>

const int N = 3333;
const char LEFT = 'L', RIGHT = 'R', STOP = 'S';

char s[N], t[N];
bool meet[N];

inline bool push(int n) {
  for (int i = 0; i < n; ++i) {
    t[i] = s[i];
  }
  bool go = false;
  for (int i = 0; i < n; ++i) {
    if (s[i] == LEFT) {
      go = true;
      if (0 == i) {
        t[i] = STOP;
        continue;
      }
      if (s[i - 1] == RIGHT) {
        t[i] = STOP;
        continue;
      }
      if (meet[i - 1]) {
        t[i - 1] = '.';
        t[i] = STOP;
      } else {
        t[i - 1] = LEFT;
        t[i] = STOP;
        meet[i - 1] = true;
      }
      continue;
    }
    if (s[i] == RIGHT) {
      go = true;
      if (n - 1 == i) {
        t[i] = STOP;
        continue;
      }
      if (s[i + 1] == LEFT) {
        t[i] = STOP;
        continue;
      }
      if (meet[i + 1]) {
        t[i + 1] = '.';
        t[i] = STOP;
      } else {
        t[i + 1] = RIGHT;
        t[i] = STOP;
        meet[i + 1] = true;
      }
      continue;
    }
  }
  for (int i = 0; i < n; ++i) {
    s[i] = t[i];
  }
  return go;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  bool go = true;
  while (go) {
    go = push(n);
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '.') {
      ++ans;
    }
  }
  printf("%d\n", ans);
  return 0;
}
