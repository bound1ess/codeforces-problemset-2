#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  map <int, int> mp;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    ++mp[x];
  }
  long long ans = 0LL;
  for (const pair <int, int> &el : mp) {
    int inv = -el.first;
    if (el.first == inv) {
      ans += (long long) el.second * (mp[inv] - 1LL) / 2LL;
      mp[inv] = 0;
      continue;
    }
    if (mp.find(inv) != mp.end()) {
      ans += (long long) el.second * mp[inv];
      mp[inv] = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
