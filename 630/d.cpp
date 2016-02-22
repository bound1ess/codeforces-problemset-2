#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  long long ans = 3LL * n * (n + 1LL) + 1LL;
  cout << ans << endl;
  return 0;
}
