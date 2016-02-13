#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;
  --n;
  for (long long i = 1LL; i <= n; ++i) {
    n -= i;
  }
  cout << (n + 1LL) << endl;
  return 0;
}
