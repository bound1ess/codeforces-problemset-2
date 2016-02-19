#include <cstdio>

using namespace std;

const int N = 1234;
int a[N], l[N], r[N];

inline bool check(int a, int b, int c, int d) {
  return (a < c && c < b && b < d) || (c < a && a < d && d < b);
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  int m = 0;
  for (int i = 0; i < n - 1; ++i) {
    l[m] = a[i] < a[i + 1] ? a[i] : a[i + 1];
    r[m] = a[i] < a[i + 1] ? a[i + 1] : a[i];
    ++m;
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < m; ++j) {
      if (check(l[i], r[i], l[j], r[j])) {
        puts("yes");
        return 0;
      }
    }
  }
  puts("no");
  return 0;
}
