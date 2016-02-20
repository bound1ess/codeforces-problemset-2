#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  if (n <= 10) {
    puts("0");
  } else if (n <= 19) {
    puts("4");
  } else if (n == 20) {
    puts("15");
  } else if (n == 21) {
    puts("4");
  } else {
    puts("0");
  }
  return 0;
}
