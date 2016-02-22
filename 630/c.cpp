#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  long long ans = (1LL << (n + 1LL)) - 2LL;
  cout << ans << endl;
  return 0;
}
