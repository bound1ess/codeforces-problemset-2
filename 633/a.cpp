#include <cstdio>

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  for (int i = 0; i * a <= c; ++i) {
    for (int j = 0; i * a + j * b <= c; ++j) {
      if (i * a + j * b == c) {
        puts("Yes");
        return 0;
      }
    }
  }
  puts("No");
  return 0;
}
