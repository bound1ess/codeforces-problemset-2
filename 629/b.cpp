#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 5555;
int f[N], m[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  cin >> n;
  char g;
  int a, b;
  for (int i = 0; i < n; ++i) {
    cin >> g >> a >> b;
    if (g == 'F') {
      ++f[a], --f[b + 1];
    } else {
      ++m[a], --m[b + 1];
    }
  }
  for (int i = 1; i < N; ++i) {
    f[i] += f[i - 1];
    m[i] += m[i - 1];
  }
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    ans = max(ans, 2 * min(f[i], m[i]));
  }
  cout << ans << endl;
  return 0;
}
