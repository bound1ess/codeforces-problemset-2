#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 123;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  sort(a, a + n);
  int ans = 0;
  for (int i = 0; i < m && a[i] < 0; ++i) {
    ans += -a[i];
  }
  printf("%d\n", ans);
  return 0;
}
