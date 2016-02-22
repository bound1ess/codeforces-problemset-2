#include <iostream>
#include <cstdio>

using namespace std;

const int N = 15;
const int k[N] = {-2, -3, -5, -7, 6, 10, 14, 15, 21, 35, -30, -42, -70, -105, 210};

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long n;
  cin >> n;
  long long ans = n;
  for (int i = 0; i < N; ++i) {
    ans += n / (long long) k[i];
  }
  cout << ans << endl;
  return 0;
}
