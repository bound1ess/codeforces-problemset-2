#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int low, high, down, up;
  scanf("%d%d", &low, &high);
  scanf("%d%d", &up, &down);
  if (high <= low + up * (22 - 14)) {
    puts("0");
    return 0;
  }
  if (down < up) {
    int num = high - low - up * (22 - 14);
    int den = (up - down) * (22 - 10);
    if (num % den == 0) {
      printf("%d\n", num / den);
    } else {
      printf("%d\n", num / den + 1);
    }
    return 0;
  }
  puts("-1");
  return 0;
}
