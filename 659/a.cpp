#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int len, pos, dist;
  scanf("%d%d%d", &len, &pos, &dist);
  if (dist < 0) {
    for (int i = 0; i < -dist; ++i) {
      pos = (pos == 1 ? len : pos - 1);
    }
  } else {
    for (int i = 0; i < dist; ++i) {
      pos = (pos == len ? 1 : pos + 1);
    }
  }
  printf("%d\n", pos);
  return 0;
}
