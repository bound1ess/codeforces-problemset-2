#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1234;
int a[N], b[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  long long s = 0LL, t = 0LL;
  for (int i = 0; i < n; ++i) {
    s |= a[i];
  }
  for (int i = 0; i < n; ++i) {
    t |= b[i];
  }
  cout << (s + t) << endl;
  return 0;
}
