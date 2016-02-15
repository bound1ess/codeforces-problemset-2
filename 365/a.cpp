#include <cstdio>
#include <set>

using namespace std;

const int N = 123;

int a[N];

inline bool is_good(int val, int k) {
  // ...call a number k-good if it contains all digits not exceeding k (0, ..., k).
  set <int> d;
  while (0 < val) {
    d.insert(val % 10);
    val /= 10;
  }
  for (int i = 0; i <= k; ++i) {
    if (d.count(i) == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k, ans = 0;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < n; ++i) {
    if (is_good(a[i], k)) {
      ++ans;
    }
  }
  printf("%d\n", ans);
  return 0;
}
