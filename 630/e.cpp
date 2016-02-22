#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  long long ans = (x2 - x1 + 1LL) * (1LL + (y2 - y1) / 2LL) - (x2 - x1) / 2LL;
  cout << ans << endl;
  return 0;
}
