#include <cstdio>
#include <set>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  scanf("%d", &n);
  multiset <int> s;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    s.insert(x);
  }
  int val = int(1e9), ans = 0;
  while ( ! s.empty()) {
    auto sb = s.upper_bound(val);
    if (s.end() == sb) {
      val = *s.begin();
      s.erase(s.begin());
    } else {
      val = *sb;
      s.erase(s.find(val));
      ++ans;
    }
  }
  printf("%d\n", ans);
  return 0;
}
