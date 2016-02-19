#include <cstdio>

const int N = 123, M = 5;
char s[N][N];
bool vis[N][N];

const int xt[M] = {0, -1, 1, 0, 0};
const int yt[M] = {0, 0, 0, -1, 1};

inline void get(int &x, int &y, bool &ok, int n) {
  ok = false;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (s[i][j] == '#' && ! vis[i][j]) {
        x = j, y = i;
        ok = true;
        return;
      }
    }
  }
}

inline bool check(int x, int y) {
  bool vert = s[y - 1][x] == '#' && s[y + 1][x] == '#';
  bool horiz = s[y][x - 1] == '#' && s[y][x + 1] == '#';
  return s[y][x] == '#' && vert && horiz;
}

inline bool check_bounds(int x, int y, int n) {
  return (0 < x && x + 1 < n) && (0 < y && y + 1 < n);
}

inline bool check_all(int &x, int &y, int n) {
  for (int i = 0; i < M; ++i) {
    int a = x + xt[i], b = y + yt[i];
    if (check_bounds(a, b, n) && check(a, b)) {
      x = a, y = b;
      return true;
    }
  }
  return false;
}

inline void mark(int x, int y) {
  s[y][x] = s[y - 1][x] = s[y + 1][x] = s[y][x - 1] = s[y][x + 1] = true;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%s", s[i]);
  }
  while (true) {
    int x, y;
    bool ok;
    get(x, y, ok, n);
    if ( ! ok) {
      break;
    }
    if ( ! check_all(x, y, n)) {
      puts("NO");
      return 0;
    } else {
      mark(x, y);
    }
  }
  puts("YES");
  return 0;
}
