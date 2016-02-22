#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  double d = sqrt(double(b * b - 4 * a * c));
  double r1 = (-b + d) / (2 * a);
  double r2 = (-b - d) / (2 * a);
  printf("%.6f\n%.6f\n", max(r1, r2), min(r1, r2));
  return 0;
}
