#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  cout << (2LL - (n % 2LL)) << endl;
  return 0;
}
