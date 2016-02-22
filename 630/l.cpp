#include <cstdio>

const int N = 10, MOD = int(1e5);
char s[N];

inline int build(int a, int b, int c, int d, int e) {
  int ans = 0;
  ans += e;
  ans += d * 10;
  ans += c * 100;
  ans += b * 1000;
  ans += a * 10000;
  return ans;
}

inline int pow(int b, int e, int md) {
  int ans = 1;
  while (0 < e) {
    if (e % 2 == 1) {
      ans = (ans * 1LL * b) % md;
    }
    b = (b * 1LL * b) % md;
    e /= 2;
  }
  return ans;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s", s);
  int k = build(s[0] - '0', s[2] - '0', s[4] - '0', s[3] - '0', s[1] - '0');
  printf("%05d\n", pow(k, 5, MOD));
  return 0;
}
