#include <iostream>
#include <cstdio>

using namespace std;

const int N = 10;
int a[N], b[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  cin >> n >> m;
  for (int i = 1; i < n + 1; ++i) {
    ++a[i % N];
  }
  for (int i = 1; i < m + 1; ++i) {
    ++b[i % N];
  }
  long long ans = 0LL;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (0 == (i + j) % N || N / 2 == (i + j) % N) {
        ans += (long long) a[i] * b[j];
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
