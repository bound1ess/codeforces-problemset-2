#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline bool check(int a, int b, int c) {
  return abs(a - b) <= 2 && abs(a - c) <= 2 && abs(b - c) <= 2;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  vector <int> v;
  for (int i = 0; i < n; ++i) {
    int x;
    scanf("%d", &x);
    if (find(v.begin(), v.end(), x) == v.end()) {
      v.push_back(x);
    }
  }
  sort(v.begin(), v.end());
  for (int i = 1, m = int(v.size()); i < m - 1; ++i) {
    if (check(v[i - 1], v[i], v[i + 1])) {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}
