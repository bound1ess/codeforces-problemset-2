#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  long long k = n * (n - 1LL) * (n - 2LL) * (n - 3LL) * (n - 4LL);
  cout << (k / 120LL * k) << endl;
  return 0;
}
