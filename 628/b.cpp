#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

inline bool check_one(char c) {
  return (c - '0') % 4 == 0;
}

inline bool check_two(char a, char b) {
  return ((a - '0') * 10 + b - '0') % 4 == 0;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  ios_base::sync_with_stdio(false);
  string s;
  int n;
  long long ans = 0ll;
  cin >> s;
  n = int(s.length());
  for (int i = 0; i < n; ++i) {
    if (check_one(s[i])) {
      ++ans;
    }
  }
  for (int i = 0; i < n - 1; ++i) {
    if (check_two(s[i], s[i + 1])) {
      ans += (long long) i + 1LL;
    }
  }
  cout << ans << endl;
  return 0;
}
