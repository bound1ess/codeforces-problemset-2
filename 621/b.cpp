#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

map <int, int> a, b;

inline long long pairs(long long x) {
  return x * (x - 1LL) / 2LL;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x, y;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &x, &y);
    ++a[x - y], ++b[x + y];
  }
  long long ans = 0LL;
  for (auto it = a.begin(); it != a.end(); ++it) {
    ans += pairs(it->second);
  }
  for (auto it = b.begin(); it != b.end(); ++it) {
    ans += pairs(it->second);
  }
  cout << ans << endl;
  return 0;
}
