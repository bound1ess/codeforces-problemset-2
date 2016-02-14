#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n, a, b, c;
  cin >> n >> a >> b >> c;
  long long k = max(0LL, (n - c) / (b - c));
  cout << max(n / a, k + (n - k * (b - c)) / a) << endl;
  return 0;
}
