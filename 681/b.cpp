#include <cstdio>

const int A = 1234567, B = 123456, C = 1234;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  bool ok = false;
  for (int i = 0; i < n / A + 1; ++i) {
    for (int j = 0; j < n / B + 1; ++j) {
      int x = n - i * A - j * B;
      if (0 <= x && x % C == 0) {
        ok = true;
        break;
      }
    }
    if (ok) {
      break;
    }
  }
  puts(ok ? "YES" : "NO");
  return 0;
}
