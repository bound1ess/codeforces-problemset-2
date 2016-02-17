#include <cstdio>

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, sum = 0;
  scanf("%d", &n);
  for (int i = 2; i < n; ++i) {
    int m = n;
    while (0 < m) {
      sum += m % i;
      m /= i;
    }
  }
  int g = gcd(sum, n - 2);
  printf("%d/%d\n", sum / g, (n - 2) / g);
  return 0;
}
