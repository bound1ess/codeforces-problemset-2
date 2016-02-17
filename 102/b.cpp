#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  string s;
  int ans = 0;
  cin >> s;
  while (1 < int(s.length())) {
    string t;
    int sum = 0;
    for (int i = 0, n = int(s.length()); i < n; ++i) {
      sum += s[i] - '0';
    }
    while (0 < sum) {
      t += (sum % 10) + '0';
      sum /= 10;
    }
    reverse(t.begin(), t.end());
    s = t, ++ans;
  }
  cout << ans << endl;
  return 0;
}
