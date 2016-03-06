#include <cstdio>

const int N = 123;
int c[N], bc[N];

inline bool check(int pos, int n, int len) {
  if (c[pos] == -1) {
    return false;
  }
  int c_len = 1;
  for (int i = pos + 1; i < n; ++i) {
    if (c[i] == c[pos]) {
      ++c_len;
    } else if (c[i] != -1) {
      break;
    }
  }
  return len <= c_len;
}

inline void clear(int pos, int n) {
  for (int i = pos + 1; i < n; ++i) {
    if (c[i] == c[pos]) {
      c[i] = -1;
    } else if (c[i] != -1) {
      break;
    }
  }
  c[pos] = -1;
}

inline void backup(int n) {
  for (int i = 0; i < n; ++i) {
    bc[i] = c[i];
  }
}

inline void restore(int n) {
  for (int i = 0; i < n; ++i) {
    c[i] = bc[i];
  }
}

inline void chain(int n) {
  bool chain = true;
  while (chain) {
    chain = false;
    for (int i = 0; i < n; ++i) {
      if (check(i, n, 3)) {
        clear(i, n);
        chain = true;
      }
    }
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k, x;
  scanf("%d%d%d", &n, &k, &x);
  for (int i = 0; i < n; ++i) {
    scanf("%d", c + i);
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (c[i] == x && check(i, n, 2)) {
      backup(n);
      clear(i, n);
      chain(n);
      int res = n;
      for (int j = 0; j < n; ++j) {
        if (c[j] != -1) {
          --res;
        }
      }
      if (ans < res) {
        ans = res;
      }
      restore(n);
    }
  }
  printf("%d\n", ans);
  return 0;
}
