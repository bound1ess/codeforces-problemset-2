#include <iostream>
#include <cstdio>

using namespace std;

const int N = 510;
long long c[N][N];

inline void precompute() {
  for (int i = 0; i < N; ++i) {
    c[i][0] = 1LL;
    for (int j = 1; j <= i; ++j) {
      c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
    }
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  cin >> n;
  precompute();
  cout << (c[n + 2][3] * c[n + 4][5]) << endl;
  return 0;
}
