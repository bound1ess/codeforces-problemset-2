#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 123456;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  sort(a, a + n);
  int ans = 1;
  for (int i = 0; i < n; ++i) {
    if (ans <= a[i]) {
      ++ans;
    }
  }
  printf("%d\n", ans);
  return 0;
}
