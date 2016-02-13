#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  --n;
  for (long long i = 1LL; i <= n; ++i) {
    n -= i;
  }
  cout << (n + 1LL) << endl;
  return 0;
}
