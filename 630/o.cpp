#include <cstdio>
#include <cmath>

inline void print(double x, double y) {
  printf("%.9f %.9f\n", x, y);
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int px, py, vx, vy, a, b, c, d;
  scanf("%d%d%d%d%d%d%d%d", &px, &py, &vx, &vy, &a, &b, &c, &d);
  double len = sqrt(vx * vx + vy * vy);
  double vnx = vx / len, vny = vy / len;
  print(px + vnx * b, py + vny * b);
  double vlx = -vny, vly = vnx;
  print(px + vlx * a / 2, py + vly * a / 2);
  print(px + vlx * c / 2, py + vly * c / 2);
  print(px + vlx * c / 2 - vnx * d, py + vly * c / 2 - vny * d);
  print(px - vlx * c / 2 - vnx * d, py - vly * c / 2 - vny * d);
  print(px - vlx * c / 2, py - vly * c / 2);
  print(px - vlx * a / 2, py - vly * a / 2);
  return 0;
}
