#include <cstdio>

const int N = 4, M = 111;
const int LEFT_WINDOW = 0, LEFT_NONWINDOW = 1, RIGHT_NONWINDOW = 2, RIGHT_WINDOW = 3;

int r[N][M], ans[N * M];

inline void add(int &cnt, int val) {
  ans[cnt] = val;
  ++cnt;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m, offset = 0;
  scanf("%d%d", &n, &m);
  {
    int row = 0;
    bool left = true;
    for (int i = 0; i < m && row < n; ++i, ++offset) {
      if (left) {
        r[LEFT_WINDOW][row] = i + 1;
        left = false;
      } else {
        r[RIGHT_WINDOW][row] = i + 1;
        left = true;
        ++row;
      }
    }
  }
  {
    int row = 0;
    bool left = true;
    for (int i = offset; i < m; ++i) {
      if (left) {
        r[LEFT_NONWINDOW][row] = i + 1;
        left = false;
      } else {
        r[RIGHT_NONWINDOW][row] = i + 1;
        left = true;
        ++row;
      }
    }
  }
  {
    int row = 0, cnt = 0;
    bool left = true, window = false;
    for (int i = 0; i < N * n && cnt < m; ++i) {
      if (window) {
        if (left) {
          if (0 < r[LEFT_WINDOW][row]) {
            add(cnt, r[LEFT_WINDOW][row]);
          }
          window = false;
          left = false;
        } else {
          if (0 < r[RIGHT_WINDOW][row]) {
            add(cnt, r[RIGHT_WINDOW][row]);
          }
          window = false;
          left = true;
          ++row;
        }
      } else {
        if (left) {
          if (0 < r[LEFT_NONWINDOW][row]) {
            add(cnt, r[LEFT_NONWINDOW][row]);
          }
          window = true;
        } else {
          if (0 < r[RIGHT_NONWINDOW][row]) {
            add(cnt, r[RIGHT_NONWINDOW][row]);
          }
          window = true;
        }
      }
    }
  }
  for (int i = 0; i < m; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", ans[i]);
  }
  putchar('\n');
  return 0;
}
