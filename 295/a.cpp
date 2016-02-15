#include <iostream>
#include <cstdio>

using namespace std;

const int N = 123456;
long long a[N], add[N], l[N], r[N], d[N], ops[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  ios_base::sync_with_stdio(false);
  int n, m, k, x, y;
  cin >> n >> m >> k;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> l[i] >> r[i] >> d[i];
    --l[i], --r[i];
  }
  for (int i = 0; i < k; ++i) {
    cin >> x >> y;
    --x, --y;
    ++ops[x], --ops[y + 1];
  }
  for (int i = 1; i < m; ++i) {
    ops[i] += ops[i - 1];
  }
  for (int i = 0; i < m; ++i) {
    add[l[i]] += ops[i] * d[i];
    add[r[i] + 1] -= ops[i] * d[i];
  }
  for (int i = 1; i < n; ++i) {
    add[i] += add[i - 1];
  }
  for (int i = 0; i < n; ++i) {
    if (0 < i) {
      cout << ' ';
    }
    cout << (a[i] + add[i]);
  }
  cout << endl;
  return 0;
}
