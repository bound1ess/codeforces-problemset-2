#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  long long ans = 3LL * (3LL * n - 1LL) * (1LL << (2LL * n - 6LL));
  cout << ans << endl;
  return 0;
}
