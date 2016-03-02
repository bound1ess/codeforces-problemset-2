#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n, p;
  cin >> n >> p;
  vector <string> v;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  reverse(v.begin(), v.end());
  long long k = 0LL, ans = 0LL;
  for (int i = 0; i < n; ++i) {
    k *= 2LL;
    if (v[i] == "halfplus") {
      ++k;
    }
    ans += k * p / 2LL;
  }
  cout << ans << endl;
  return 0;
}
