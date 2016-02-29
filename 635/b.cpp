#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  scanf("%d", &n);
  vector <int> a, b;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    if (x != 0) {
      a.push_back(x);
    }
  }
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    if (x != 0) {
      b.push_back(x);
    }
  }
  rotate(a.begin(), min_element(a.begin(), a.end()), a.end());
  rotate(b.begin(), min_element(b.begin(), b.end()), b.end());
  puts(a == b ? "YES" : "NO");
  return 0;
}
