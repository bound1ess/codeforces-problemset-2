#include <cstdio>
#include <map>
#include <iostream>
#include <utility>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  ios_base::sync_with_stdio(false);
  map <int, int> mx, my;
  map <pair <int, int>, int> mp;
  long long ans = 0LL;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    pair <int, int> p = make_pair(x, y);
    ans += mx[x] + my[y] - mp[p];
    ++mx[x], ++my[y], ++mp[p];
  }
  cout << ans << endl;
  return 0;
}
