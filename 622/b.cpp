#include <cstdio>
#include <cstring>

const int N = 123;
char tmp[N];

inline void format(int val) {
  if (val < 10) {
    putchar('0');
  }
  printf("%d", val);
}

inline void add_hour(int &curr_h) {
  if (curr_h + 1 == 24) {
    curr_h = 0;
  } else {
    ++curr_h;
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int m;
  scanf("%s", tmp);
  scanf("%d", &m);
  bool sep = false;
  int curr_h = 0, curr_m = 0;
  for (int i = 0, n = int(strlen(tmp)); i < n; ++i) {
    if (':' == tmp[i]) {
      sep = true;
      continue;
    }
    if (sep) {
      curr_m = curr_m * 10 + (tmp[i] - '0');
    } else {
      curr_h = curr_h * 10 + (tmp[i] - '0');
    }
  }
  // add hours
  for (int i = 0; i < m / 60; ++i) {
    add_hour(curr_h);
  }
  // add mins
  for (int i = 0; i < m % 60; ++i) {
    if (curr_m + 1 == 60) {
      curr_m = 0;
      add_hour(curr_h);
    } else {
      ++curr_m;
    }
  }
  format(curr_h);
  putchar(':');
  format(curr_m);
  putchar('\n');
  return 0;
}
